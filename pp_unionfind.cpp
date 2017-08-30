
#define pp_gen_field(list) pp_gen_field1 list
#define pp_gen_field1(name, val) decltype(val) name;
#define pp_gen_init(list) pp_gen_init1 list
#define pp_gen_init1(name, val) ,val
#define pp_gen_find_set_wrap(ufnodename) ufnodename pp_gen_find_set
#define pp_gen_find_set(list) pp_gen_find_set1 list
#define pp_gen_find_set1(name, val) \
  find_set_ ## name(int x, decltype(val) v) { \
    if (nodes[x].parent == x) { \
      nodes[x].name = v; \
      return nodes[x]; \
    } else { \
      return nodes[x] = find_set_ ## name(nodes[x].parent, v); \
    } \
  }
#define pp_gen_unite_set(list) pp_gen_unite_set1 list
#define pp_gen_unite_set1(name, val) \
  if (nodes[x].name == val) { \
    find_set_ ## name(x, find(y).name); \
  } \
  if (nodes[y].name == val) { \
    find_set_ ## name(y, find(x).name); \
  }

#define def_unionfind(ufname, ufnodename, ...) \
  struct ufnodename { \
    int parent; \
    pp_foreach(pp_gen_field, __VA_ARGS__) \
  }; \
  struct ufname { \
    vector<ufnodename> nodes; \
    vector<int> rank; \
    ufname(int n) : nodes(n+1), rank(n+1) { \
      rep (i in n) { \
        nodes[i] = ufnodename{i pp_foreach(pp_gen_init, __VA_ARGS__)}; \
        rank[i] = 0; \
      } \
    } \
    ufnodename find(int x) { \
      if (nodes[x].parent == x) { \
        return nodes[x]; \
      } else { \
        return nodes[x] = find(nodes[x].parent); \
      } \
    } \
    pp_foreach(pp_gen_find_set_wrap(ufnodename), __VA_ARGS__) \
    void unite(int x, int y) { \
      x = find(x).parent; \
      y = find(y).parent; \
      if (x == y) return; \
      if (rank[x] < rank[y]) { \
        pp_foreach(pp_gen_unite_set, __VA_ARGS__); \
        nodes[x].parent = y; \
      } else { \
        pp_foreach(pp_gen_unite_set, __VA_ARGS__); \
        nodes[y].parent = x; \
        if (rank[x] == rank[y]) rank[x]++; \
      } \
    } \
    bool same(int x, int y) { \
      return find(x).parent == find(y).parent; \
    } \
  }


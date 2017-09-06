
template <typename T, int SZ>
inline int size(T(&)[SZ]) {
  return SZ;
}

template <typename T, int SZ1, int SZ2>
inline pair<int, int> size(T(&)[SZ1][SZ2]) {
  return mp(SZ1, SZ2);
}

template <typename T, bool>
struct debug_ary_struct;

template <typename T>
struct debug_ary_struct<T, false> {
  static void output(T& v) {
    rep (e in v) cout << e << ",";
  }
};
template <typename T>
struct debug_ary_struct<T, true> {
  static void output(T& arr) {
    rep (i in size(arr)) cout << arr[i] << ",";
  }
};


template <typename T, int SZ1, int SZ2>
void debug_grid_body(int line, T (&grid)[SZ1][SZ2]) {
  cout << "L" << line << ": grid" << endl;
  rep (i in SZ1) {
    rep (j in SZ2) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}
template <int SZ1, int SZ2>
void debug_grid_body(int line, int width, int (&grid)[SZ1][SZ2]) {
  cout << "L" << line << ": grid" << endl;
  rep (i in SZ1) {
    rep (j in SZ2) {
      printf("%*d ", width, grid[i][j]);
    }
    cout << endl;
  }
}

#define debug_var_elem(v) << #v << "=" << v << " "
#ifdef DEBUG
#define debug_echo(e) cout << "L" << __LINE__ << ": " << e << endl
#define debug_var(...) cout << "L" << __LINE__ << ": " pp_foreach(debug_var_elem, __VA_ARGS__) << endl
#define debug_time2(i, e) auto start ## i = clock(); e; auto end ## i = clock(); cout << "L" << __LINE__ << ": " << (double)(end ## i - start ## i) << "ms" << endl;
#define debug_time1(f, i, e) f(i, e)
#define debug_time(e) debug_time1(debug_time2, __COUNTER__, e)
#define debug_ary(ary) cout << "L" << __LINE__ << ": " << "{"; debug_ary_struct<decltype(ary), is_array<decltype(ary)>::value>::output(ary); cout << "}" << endl;
#define debug_grid(grid) debug_grid_body(__LINE__, 1, grid)
#define debug_gridw(grid, w) debug_grid_body(__LINE__, w, grid)
#else
#define debug_echo(e)
#define debug_var(...)
#define debug_time(e) e;
#define debug_ary(ary)
#define debug_grid(grid)
#define debug_gridw(grid, w)
#endif



template <typename T>
struct RepIterator {
  T i;
  RepIterator() : i(0) {}
  RepIterator(T n) : i(n) {}
  bool operator ==(const RepIterator<T>& rhs) { return i == rhs.i; }
  bool operator !=(const RepIterator<T>& rhs) { return i != rhs.i; }
  T operator *() { return i; }
  RepIterator<T> operator ++() {i++; return *this; };
};
template <typename T>
struct RepLoop {
  T i;
  RepLoop(T n) : i(n) {}
  RepIterator<T> begin() { return RepIterator<T>(); }
  RepIterator<T> end() { return RepIterator<T>(i); }
};

template <typename T>
struct rep_range {
  static T range(T v) {
    return v;
  }
};
template <>
struct rep_range<int> {
  static RepLoop<int> range(int n) {
    return RepLoop<int>(n);
  }
};
template <>
struct rep_range<size_t> {
  static RepLoop<int> range(size_t n) {
    return RepLoop<int>((int)n);
  }
};

#define rep(...) rep1(rep2, (__VA_ARGS__))
#define rep1(X, A) X A
#define rep2(i, ...) pp_if(pp_is_one(__VA_ARGS__), rep_len1(i, __VA_ARGS__), rep3(i, __VA_ARGS__))
#define rep_len1(i, end, ...) for (auto i : rep_range<decltype(end)>::range(end))
#define rep3(i, iter, ...) rep4(rep5, (iter, i, esc_paren __VA_ARGS__))
#define rep4(X, A) X A
#define rep5(iter, ...) iter(__VA_ARGS__)

#define up up_iter ,
#define up_iter3(i, start, end) for (auto i = start; i < end; i++)
#define up_iter4(i, start, end, up) for (auto i = start; i < end; i += up)
#define up_iter(...) pp_cat(up_iter, pp_narg(__VA_ARGS__))(__VA_ARGS__)
#define down down_iter ,
#define down_iter2(i, end) for(auto i = end-1; i >= 0; i--)
#define down_iter3(i, start, end) for (auto i = end-1; i >= start; i--)
#define down_iter4(i, start, end, down) for (auto i = end-1; i >= start; i -= down)
#define down_iter(...) pp_cat(down_iter, pp_narg(__VA_ARGS__))(__VA_ARGS__)


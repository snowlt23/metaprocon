
#define rep(...) rep1(rep2, (__VA_ARGS__))
#define rep1(X, A) X A
#define rep2(i, ...) pp_if(pp_is_one(__VA_ARGS__), rep_len1(i, __VA_ARGS__), rep3(i, __VA_ARGS__))
#define rep_len1(i, end, ...) for (int i = 0; i < end; i++)
#define rep3(i, iter, ...) rep4(rep5, (iter, i, esc_paren __VA_ARGS__))
#define rep4(X, A) X A
#define rep5(iter, ...) iter(__VA_ARGS__)

#define up up_iter ,
#define up_iter3(i, start, end) for (int i = start; i < end; i++)
#define up_iter4(i, start, end, up) for (int i = start; i < end; i += up)
#define up_iter(...) pp_cat(up_iter, pp_narg(__VA_ARGS__))(__VA_ARGS__)
#define down down_iter ,
#define down_iter2(i, end) for(int i = end-1; i >= 0; i--)
#define down_iter3(i, start, end) for (int i = end-1; i >= start; i--)
#define down_iter4(i, start, end, down) for (int i = end-1; i >= start; i -= down)
#define down_iter(...) pp_cat(down_iter, pp_narg(__VA_ARGS__))(__VA_ARGS__)
#define viter viter_iter ,
#define viter_iter(i, v) auto tmpitr=v.begin(); for (auto i=*tmpitr; tmpitr != v.end(); tmpitr++)



#include <bits/stdc++.h>
using namespace std;

#define in ,
#define esc_paren(...) __VA_ARGS__
#define pp_empty(...)
#define pp_cat_i(x, y) x ## y
#define pp_cat(x, y) pp_cat_i(x, y)

#define pp_inc0 1
#define pp_inc1 2
#define pp_inc2 3
#define pp_inc3 4
#define pp_inc4 5
#define pp_inc5 6
#define pp_inc6 7
#define pp_inc7 8
#define pp_inc8 9
#define pp_inc(i) pp_cat(pp_inc, i)

#define pp_arg10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, ...) _9
#define pp_has_comma(...) pp_arg10(__VA_ARGS__, 1, 1, 1, 1, 1, 1, 1, 1, 0)
#define pp_trigger_paren(...) ,
#define pp_is_empty(...) \
  pp_is_empty1( \
      pp_has_comma(__VA_ARGS__), \
      pp_has_comma(pp_trigger_paren __VA_ARGS__), \
      pp_has_comma(__VA_ARGS__()), \
      pp_has_comma(pp_trigger_paren __VA_ARGS__()) \
      ) 
#define pp_paste5(_0, _1, _2, _3, _4) _0 ## _1 ## _2 ## _3 ## _4
#define pp_is_empty1(_0, _1, _2, _3) pp_has_comma(pp_paste5(pp_is_empty_case_, _0, _1, _2, _3))
#define pp_is_empty_case_0001 ,

#define pp_is_one(...) pp_is_one_(__VA_ARGS__, pp_one_seq)
#define pp_is_one_(...) pp_is_one_n(__VA_ARGS__)
#define pp_is_one_n(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10, N, ...) N
#define pp_one_seq 0,0,0,0,0,0,0,0,0,1,0

#define pp_narg(...) \
         pp_narg_(__VA_ARGS__, pp_narg_seq)
#define pp_narg_(...) \
         pp_narg_n(__VA_ARGS__)
#define pp_narg_n( \
          _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
         _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
         _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
         _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
         _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
         _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
         _61,_62,_63,n,...) n
#define pp_narg_seq \
         63,62,61,60, \
         59,58,57,56,55,54,53,52,51,50, \
         49,48,47,46,45,44,43,42,41,40, \
         39,38,37,36,35,34,33,32,31,30, \
         29,28,27,26,25,24,23,22,21,20, \
         19,18,17,16,15,14,13,12,11,10, \
          9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define pp_if_0(x, y) y
#define pp_if_1(x, y) x
#define pp_if(cond, x, y) pp_cat(pp_if_, cond)(x, y)

#define pp_foreach_i9(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i8(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i7(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i6(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i5(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i4(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i3(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i2(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i1(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i0(i, f, x, ...) f(x) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach_i(i, f, ...) pp_if(pp_is_empty(__VA_ARGS__), pp_empty, pp_cat(pp_foreach_i, i))(pp_inc(i), f, __VA_ARGS__)
#define pp_foreach(f, ...) pp_foreach_i(0, f, __VA_ARGS__)


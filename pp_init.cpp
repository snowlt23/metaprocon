
#define pp_init2(cnt, body) struct _InitStruct ## cnt { _InitStruct ## cnt() { body } } _initstruct ## cnt;
#define pp_init1(f, cnt, body) f(cnt, body)
#define pp_init(body) pp_init1(pp_init2, __COUNTER__, body)

#define init_array(arr, N, val) pp_init(rep (i in N) { arr[i] = val; })
#define iota_array(arr, N, start) pp_init(rep (i in N) { arr[i] = start + i; })


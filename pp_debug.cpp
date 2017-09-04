
#define debug_var_elem(v) << #v << "=" << v << " "
#ifdef DEBUG
#define debug_echo(e) cout << "L" << __LINE__ << ": " << e << endl
#define debug_var(...) cout << "L" << __LINE__ << ": " pp_foreach(debug_var_elem, __VA_ARGS__) << endl
#define debug_time2(i, e) auto start ## i = clock(); e; auto end ## i = clock(); cout << (double)(end ## i - start ## i) << "ms" << endl;
#define debug_time1(f, i, e) f(i, e)
#define debug_time(e) debug_time1(debug_time2, __COUNTER__, e)
#else
#define debug_echo(e)
#define debug_var(...)
#define debug_time(e) e;
#endif


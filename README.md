
# Metaprocon

**at your own risk**

Metaprocon is personal metaprogramming library for Programming Contest.  
**warning**: this library using preprocessor and template black dark magic power.

# Example

Alternative rep macro
```cpp
rep (i in N) {...} // normal rep macro
rep (i in up(1, N+1)) {...} // spec start
rep (i in up(0, N, 2)) {...} // spec step
rep (i in down(N)) {...} // down direction loop
rep (e in v) {...} // range based for
```

Debug macro
```cpp
int a = 1;
int b = 2;
int c = 3;
int d = 4;
debug_var(a, b, c, d); // L5: a=1 b=2 c=3 e=4
```

Debug c-array and container macro
```cpp
int arr[] = {5, 6, 7, 8, 9};
vector<int> v({1, 2, 3, 4});
debug_ary(arr);
debug_ary(v);
```

# Build

```sh
./build_cmacro.sh # output to cmacro.cpp
```


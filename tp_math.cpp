
ll gcd(ll a,ll b){while(b){ll tmp = a % b;a = b;b = tmp;}return a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

#define def_varargs(name, f) \
  template<typename First> \
  First name(First first) { return first; } \
  template<typename First, typename... Rest> \
  First name(First first, Rest... rest) { return f(first, name(rest...)); }

def_varargs(vmin, min);
def_varargs(vmax, max);


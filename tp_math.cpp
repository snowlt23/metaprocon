
ll gcd(ll a,ll b){while(b){ll tmp = a % b;a = b;b = tmp;}return a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
bool is_prime(ll n){switch(n){case 0:case 1: return false;case 2: return true;}if(n % 2 == 0) return false;for(ll i=3;i * i <= n; i += 2)if(n%i == 0) return false;return true;}

#define def_varargs(name, f) \
  template<typename First> \
  inline First name(First first) { return first; } \
  template<typename First, typename... Rest> \
  inline First name(First first, Rest... rest) { return f(first, name(rest...)); }



ll gcd(ll a,ll b){while(b){ll tmp = a % b;a = b;b = tmp;}return a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}


template<typename First>
First mmin(First first) {
  return first;
}
template<typename First, typename... Rest>
First mmin(First first, Rest... rest) {
  return min(first, mmin(rest...));
}
template<typename First>
First mmax(First first) {
  return first;
}
template<typename First, typename... Rest>
First mmax(First first, Rest... rest) {
  return max(first, mmax(rest...));
}


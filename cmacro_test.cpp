
#include "cmacro.cpp"

int arr[10]; iota_array(arr, 10, 1);

int main() {
  rep (i in 5) {
    cout << i << endl;
  }
  rep (i in up(1, 6)) {
    cout << i << endl;
  }
  rep (i in up(0, 5, 2)) {
    cout << i << endl;
  }
  rep (i in down(5)) {
    cout << i << endl;
  }

  vector<int> v;
  v.pb(6);
  v.pb(7);
  v.pb(8);
  v.pb(9);
  rep (e in v) cout << e << " ";
  cout << endl;

  int a = 1;
  int b = 2;
  int c = 3;
  debug_var(a, b, c);

  debug_ary(arr);
  debug_ary(v);
}


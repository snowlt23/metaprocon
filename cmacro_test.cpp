
#include "cmacro.cpp"

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
  int a = 1;
  int b = 2;
  int c = 3;
  debug_var(a, b, c);
}


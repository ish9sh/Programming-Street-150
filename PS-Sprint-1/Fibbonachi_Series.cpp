#include <iostream>
using namespace std;

void fibb(int n) {
  // taking predifined first and second integers for printing before third
  // operation
  int f = 0, s = 1, nx;
  if (n >= 1) {
    cout << f;
  }
  if (n >= 2) {
    cout << s;
  }

  for (int i = 3; i <= n; i++) {
    nx = f + s;
    // printing the next number after adding with  previous number
    cout << nx << " ";
    f = s;
    s = nx;
  }
}

int main() {
  int n;
  cin >> n;
  fibb(n);
}

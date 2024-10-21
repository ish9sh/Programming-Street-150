#include <iostream>
using namespace std;
void prime(int a) {
  if (a < 2) {
    cout << "Not a Prime Number";
    return;
  }
  if (a == 2) {
    cout << "Prime Number";
    return;
  }
  for (int i = 2; i * i <= a; i++) {
    if (a % 1 == 0) {
      cout << "Not a Prime Number";
      return;
    }
    cout << "Prime Number";
  }
}

int main() {
  int i;
  cin >> i;
  prime(i);
}

#include <iostream>
using namespace std;
void gcd(int n, int m) {
  if (m == 0) {
    cout << "GCD is equal to : " << n;
  } else {
    gcd(m, n % m);
  }
}
int main() {
  int a, b;
  cout << "Enter two number: ";
  cin >> a >> b;
  gcd(a, b);
  return 0;
}

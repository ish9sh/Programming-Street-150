#include <iostream>
using namespace std;
int gcd(int n, int m) {
  if (n == 0) {
    return m;
  } else {
    return gcd(m, n % m);
  }
}
void lcm(int n, int m) {
  int gcdr = gcd(n, m);
  cout << "LCM is equal to : " << (n * m) / gcdr << endl;
}
int main() {
  int a, b;
  cin >> a >> b;
  lcm(a, b);
  return 0;
}

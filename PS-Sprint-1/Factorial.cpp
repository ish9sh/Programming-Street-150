#include <iostream>
using namespace std;
double facto(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * facto(n - 1);
  }
}
int main() {
  int n;

  cin >> n;

  facto(n);
  cout << "The Factorial of " << n << " is " << facto(n);
}

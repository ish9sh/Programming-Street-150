
#include <iostream>
using namespace std;

void sod(int n) {
  int sum = 0;
  int orgn = n;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  cout << "Sum of " << orgn << " is equal to : " << sum;
}
int main() {
  int n;
  cin >> n;
  sod(n);
}

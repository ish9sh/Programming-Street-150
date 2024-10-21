#include <cmath>
#include <iostream>
using namespace std;
void armstrong(int num) {
  int orgnum = num;
  int n = 0, rem, res = 0;
  while (orgnum != 0) {
    orgnum /= 10;
    ++n;
  }
  orgnum = num;
  while (orgnum != 0) {
    rem = orgnum % 10;
    res += pow(rem, n);
    orgnum /= 10;
  }
  if (res == num) {
    cout << num << " is Armstrong Number";
  } else {
    cout << num << " != " << rem << " So it's not an Armstrong Number";
  }
}
int main() {
  int num;
  cin >> num;
  armstrong(num);
}

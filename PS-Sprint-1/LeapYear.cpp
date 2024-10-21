#include <iostream>
using namespace std;
void leapyr(int a) {
  if (a % 4 == 0 && a % 100 != 0) {
    cout << "Leap Year";
    return;
  }
  if (a % 400 == 0) {
    cout << "Leap Year";
    return;
  } else {
    cout << "Not a Leap Year";
    return;
  }
}
int main() {
  int c;

  cin >> c;
  leapyr(c);
}

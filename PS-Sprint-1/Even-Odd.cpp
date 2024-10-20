
#include <iostream>
using namespace std;
bool evenodd(int a) {
  if (a % 2 == 0) {
    return 1;
  } else {

    return 0;
  }
}
int main() {

  int i;
  cin >> i;
  {
    if (evenodd(i) == 1) {
      cout << "Even";
    } else {
      cout << "Odd";
    }
  }
  evenodd(i);
}

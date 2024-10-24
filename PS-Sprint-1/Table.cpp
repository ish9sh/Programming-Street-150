#include <iostream>
using namespace std;
void tab(int n) {
  cout << "Table of " << n << " is - " << endl;
  for (int i = 1; i <= 10; i++) {

    cout << n << " X " << i << " = " << n * i << endl;
  }
}
int main() {
  int i;
  cin >> i;
  tab(i);
}

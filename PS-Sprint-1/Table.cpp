#include <iostream>
using namespace std;
void tab(int n, int r) {
  for (int i = 1; i <= r; i++) {
    cout << "Table of" << n << "is -" << endl
         << n << " X " << i << n * i << endl;
  }
}
int main() {
  int i;
  int r;
  cin >> i >> r;
  tab(i, r);
}

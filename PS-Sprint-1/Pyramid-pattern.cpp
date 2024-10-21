#include <iostream>
using namespace std;
void pyramid(int p) {
  for (int i = 1; i <= p; i++) {
    // printing spaces
    for (int j = 0; j < p - i; j++) {
      cout << " ";
    }
    // printing star
    for (int k = 0; k < (2 * i) - 1; k++) {
      cout << "*";
    }
    cout << endl;
  }
}
int main() {
  int n;
  cin >> n;
  pyramid(n);
}

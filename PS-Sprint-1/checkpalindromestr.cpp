#include <iostream>
using namespace std;
void palstr(string str) {
  int strt = 0;
  int end = str.length() - 1;
  while (strt < end) {
    if (str[strt] != str[end]) {
      cout << "String isn't palindrome";
      return;
    }
    strt++;
    end--;
  }
  cout << "String is palindrome";
}
int main() {
  string str;
  cin >> str;
  palstr(str);
}

#include <iostream>
#include <string>
using namespace std;
void cntvowlandconst(const string &str) {
  int cntvow = 0, cntcon = 0;
  for (char ch : str) {
    char lowerch = tolower(ch);
    if (isalpha(lowerch)) {
      if (lowerch == 'a' || lowerch == 'e' || lowerch == 'i' ||
          lowerch == 'u' || lowerch == 'o') {
        cntvow++;
      } else {
        cntcon++;
      }
    }
  }
  cout << cntvow << " is the number of Vowel in the String" << endl;

  cout << cntcon << " is the number of Constent in the String" << endl;
}
int main() {
  string inpt;
  getline(cin, inpt);
  cntvowlandconst(inpt); // Call the function with input string
}

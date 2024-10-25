#include <iostream>
#include <ostream>
using namespace std;
void largestandsmallest(int arr[], int size) {
  if (size == 0) {
    cout << "array is empty" << endl;
    return;
  }
  int lrg = arr[0];
  int smlt = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > lrg) {
      lrg = arr[i];
    }
    if (arr[i] < smlt) {
      smlt = arr[i];
    }
  }

  cout << "Largest element of the array is : " << lrg << endl;
  cout << "Smallest element of the array is : " << smlt;
}
int main() {
  int arr[] = {0, 2, 5, 3, 6, -7};
  int size = sizeof(arr) / sizeof(arr[0]);

  largestandsmallest(arr, size);
}

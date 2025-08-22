#include <iostream>
using namespace std;

int main() {
  int arr[] = {2, 4, 1, 3, 5};
  int size = sizeof(arr)/sizeof(arr[0]);
  int inversions = 0;

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) inversions++;
    }
  }

  cout<<"Total inversions = "<<inversions<<endl;
  return 0;
}

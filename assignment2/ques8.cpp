#include<iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3,4,5,5,5,5,6,1,2,3,4,1,9,0,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  int original = 0;
  for(int i=0; i<size; i++) {
    bool match = false;
    for(int j=0; j<i; j++){
      if(arr[j]==arr[i]) {
        match = true;
        break;
      }
    }
    if(match ==false) original++;
  }
  cout<<"There are "<<original<<" original characters"<<endl;

  return 0;
}
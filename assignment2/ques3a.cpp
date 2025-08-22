#include<iostream>
using namespace std;

int main() {
  int arr[]= {1,2,3,4,6,7,8,9};
  int size= sizeof(arr)/sizeof(arr[0]);
  int i, j, s=0, temp, a[s];
  for(i=0; i<size;i++){
    if(arr[i]!=i+1){
      cout<<"Element "<<i+1<<" missing!\n";
      break;
    }
  }

  return 0;
}
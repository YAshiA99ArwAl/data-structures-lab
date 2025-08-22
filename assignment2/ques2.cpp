#include<iostream>
using namespace std;

int main() {
  int arr[]= {64,34,25,12,22,11,90};
  int size= sizeof(arr)/sizeof(arr[0]);
  int i, j, temp;
  for(i=1; i<size-1; i++) {
    for(j=0; j<i; j++){
      if(arr[j]>arr[i]){
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  for(i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
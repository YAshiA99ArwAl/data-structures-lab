#include<iostream>
using namespace std;

int main() {
  int arr[]= {1,3,4,5,6,7};
  int size= sizeof(arr)/sizeof(arr[0]);
  int low=0, high=size-1, i, mid;
  
  if(arr[0]!=1) {
    cout<<"1 is missing!"; 
    return 0;
  }

  if(arr[high]-arr[low]==high-low)
    cout<<"No element is missing!";
  
  while((high-low)>1){
    mid = (low+high)/2;
    if((arr[low]-low)!=(arr[mid]-mid)){
      high=mid;
    } else if((arr[high]-high)!=(arr[mid]-mid)) {
      low=mid;
    } 
  } cout<<arr[low]+1<<" is missing!";

  return 0;
}
#include<iostream>
using namespace std;

int main() {
  int arr[]={5, 10, 12, 34, 56, 87, 92};
  int size= sizeof(arr)/sizeof(arr[0]);
  int low=0, high= size-1;
  int num;
  bool found=false;
  cout<<"Enter number to be searched: ";
  cin>>num;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==num){
      cout<<num<<" found at position "<<mid+1;
      found=true;
      break;
    } 
    else if(num>arr[mid]) {
      low= mid+1;
    }
    else if(num<arr[mid]){
      high= mid-1;
    }
  }
  if(found==false)
    cout<<num<<" not found!";

  return 0;
}
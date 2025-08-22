#include<bits/stdc++.h>
using namespace std;

int main() {
  int di1[] = {1,2,3};
  int di2[] = {4,5,6,7};
  int di3[] = {7,8,9};
  int size = sizeof(di2)/sizeof(di2[0]);
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      if(i==j) cout<<di2[i]<<" ";
      else if(i==j+1) cout<<di1[j]<<" ";
      else if(j==i+1) cout<<di3[i]<<" ";
      else cout<<"0 ";
    }
    cout<<endl;
  }

  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  int symmat[] = {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(symmat)/sizeof(symmat[0]);
  int n=0;
  int space = (sqrt(1 +8*size)-1)/2;
  for(int i=0; i<space; i++){
    for(int j=0; j<space; j++) {
      if(i>=j) cout<<symmat[i*(i+1)/2 + j]<<" ";
      else cout<<symmat[j*(j+1)/2 +i]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
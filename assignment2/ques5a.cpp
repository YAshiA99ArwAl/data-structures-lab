#include<bits/stdc++.h>
using namespace std;

int main() {
  int diagonal[3] = {1,4,5};
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i==j) cout<< diagonal[i]<<" ";
      else cout<<"0 ";
    }
    cout<<endl;
  }
  
  return 0;
}
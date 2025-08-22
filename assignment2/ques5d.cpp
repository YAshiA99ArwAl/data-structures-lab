#include<bits/stdc++.h>
using namespace std;

int main() {
  int uptri[]= {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(uptri)/sizeof(uptri[0]);
  int space  = (sqrt(1 + 8*size)-1)/2;
  int n=0;
  for(int i=0; i<space; i++){
    for(int j=0; j<space; j++){
      if(i<=j) {
        cout<<uptri[n]<<" ";
        n++;
      } else cout<<"0 ";
    }
    cout<<endl;
  }

  return 0;
}
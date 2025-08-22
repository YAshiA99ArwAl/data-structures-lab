#include<bits/stdc++.h>
using namespace std;

int main() {
  int sparse[][3] = {{5, 4, 7}, {0,2,2}, {0,3,3}, {1,1,1},{2,2,15},{3,3,4}, {4,1,25}, {4,2,1}};
  int values = sizeof(sparse)/sizeof(sparse[0]);

  // exchange
  for(int i=0; i<values; i++){
    swap(sparse[i][0], sparse[i][1]);
  }

  //sort
  sort(sparse, sparse+values, [](const int a[3], const int b[3]) {
    if (a[0]==b[0]) return a[1] <b[1];
    return a[0] < b[0];
  });

  //display
  for(int i=0; i<values; i++){
    for(int j=0; j<3; j++){
      cout<<sparse[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
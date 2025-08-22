#include<bits/stdc++.h>
using namespace std;

int main() {
  string s = "THIs IS A sentence";
  for(int i=0; i<s.length(); i++){
    if(s[i]>= 'A' && s[i]<='Z') {
      s[i]+=32;
    }
  }
  cout<<s<<endl;

  return 0;
}
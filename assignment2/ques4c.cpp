#include<bits/stdc++.h>
using namespace std;

string remVowel(string s){
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

  for(int i=0; i<s.length(); i++){
    if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
      s = s.replace(i, 1,"");
      i-=1;
    }
  }
  return s;
}

int main() {
  string s = "This is Assignment 2 of data structures lab";
 
  cout<<remVowel(s)<<endl;

  return 0;
}
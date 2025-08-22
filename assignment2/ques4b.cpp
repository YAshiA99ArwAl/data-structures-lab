#include<iostream>
using namespace std;

int main() {
  string s = "Hello World!";
  int length = s.length();
  int i, temp;
  for(i=0; i<length/2; i++){
    temp = s[i];
    s[i] = s[length-i-1];
    s[length-i-1] = temp;
  }
  cout<<s;

  return 0;
}
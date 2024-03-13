#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {
  
  int count = 0;
  string str;
  getline(cin, str);
  str += " ";

  for(int i = 0; i < str.length(); i++){
    if(str[i] == ' ') {
      count++;
    }
  }
  cout << count;
  
  return 0;
}
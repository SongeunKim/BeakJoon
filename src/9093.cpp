#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore(20, '\n');
  
  stack<char> stack;

  for (int i = 0; i < n+1; i++) {

    string str;
    getline(cin, str);
    str += " ";

    for(int j = 0; j < str.length(); j++){
      if(str[j] == ' '){
        while (!stack.empty()){
          cout << stack.top();
          stack.pop();
        }
        cout << " ";
      }
      else
        stack.push(str[j]);
    }
    
  }
  return 0;
}
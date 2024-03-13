#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  stack<int> stack;

  for (int i = 0; i < n; i++) {

    string str;
    cin >> str;
    
    if(str == "push") {
      int val;
      cin >> val;
      stack.push(val);
    }
    else if(str == "pop") {
      if(stack.empty()) {
        cout << -1 << endl;
      }
      else {
        cout << stack.top() << endl;
        stack.pop();
      } 
    }
    else if(str == "top") {
      if(stack.empty()) {
        cout << -1 << endl;
      }
      else {
        cout << stack.top() << endl;
      } 
    }
    else if(str == "size") {
      cout << stack.size() << endl;
    }
    else if(str == "empty") {
      if(stack.empty())
        cout << 1 << endl;
      else
        cout << 0 << endl;
    }
  }
  return 0;
}
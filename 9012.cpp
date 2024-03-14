#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {

  int num;
  cin >> num;

  for(int i = 0; i < num; i++) {
    stack<int> stack;
    int correct = 0;

    string str;
    //getline(cin, str);
    cin >> str;
    
    for (int j = 0; j < str.length(); j++) {
      
      if(str[0] == ')') {
        cout << "NO" << endl;
        correct--;
        break;
      }
        
      if (str[j] == '(') {
        stack.push(1);
      }
      else if (str[j] == ')') {
        if(!stack.empty() && stack.top() == 1) {
          stack.pop();
        }
        else{
          cout << "NO" << endl;
          correct--;
          break;
        }
      }
    }
    if(correct == 0) {
      if(stack.empty()) 
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }   
  }

  return 0;
}
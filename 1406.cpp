#include <iostream>
#include <stack>

using namespace std;

int main() {

  string str;
  cin >> str;

  stack<char> sL, sR;

  for (int i = 0; i < str.length(); i++) {
    sL.push(str[i]);
  }

  int count;
  cin >> count;

  for (int i = 0; i < count; i++) {
    char command;
    cin >> command;
    if (command == 'L' && !sL.empty()) {
      sR.push(sL.top());
      sL.pop();
    } else if (command == 'D' && !sR.empty()) {
      sL.push(sR.top());
      sR.pop();
    } else if (command == 'B' && !sL.empty()) {
      sL.pop();
    } else if (command == 'P') {
      char c;
      cin >> c;
      sL.push(c);
    }
  }

  while (!sL.empty()) {
    sR.push(sL.top());
    sL.pop();
  }
  while (!sR.empty()) {
    cout << sR.top();
    sR.pop();
  }
}

#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {

  int count = 1;
  string str;
  getline(cin, str);

  if (str.length() == 1 && str[0] == ' ') {
    count = 0;
  } else {
    for (int i = 1; i < str.length() - 1; i++) {
      if (str[i] == ' ') {
        count++;
      }
    }
  }

  cout << count;

  return 0;
}
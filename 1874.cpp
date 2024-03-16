#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

  int num;
  cin >> num;

  stack<int> stack;
  vector<char> answer;

  int count = 1;

  for (int i = 0; i < num; i++) {
    int n;
    cin >> n;

    while (count <= n) {
      stack.push(count++);
      answer.push_back('+');
    }

    if (stack.top() == n) {
      stack.pop();
      answer.push_back('-');
    } else {
      cout << "NO";
      return 0;
    }
  }

  for (int j = 0; j < answer.size(); j++) {
    cout << answer[j] << "\n";
  }
}

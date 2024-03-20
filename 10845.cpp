#include <iostream>
#include <queue>

using namespace std;

int main() {

  int num;
  cin >> num;

  string order;
  int value;
  queue<int> q;

  for (int i = 0; i < num; i++) {
    cin >> order;
    if (order == "push") {
      cin >> value;
      q.push(value);
    } else if (order == "pop") {
      if (q.empty())
        cout << "-1\n";
      else {
        cout << q.front() << "\n";
        q.pop();
      }
    } else if (order == "size") {
      cout << q.size() << "\n";
    } else if (order == "empty") {
      if (q.empty())
        cout << "1\n";
      else
        cout << "0\n";
    } else if (order == "front") {
      if (q.empty())
        cout << "-1\n";
      else {
        cout << q.front() << "\n";
      }
    } else if (order == "back") {
      if (q.empty())
        cout << "-1\n";
      else {
        cout << q.back() << "\n";
      }
    }
  }

  return 0;
}

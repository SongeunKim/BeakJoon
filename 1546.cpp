#include <iostream>
#include <stack>

using namespace std;

int main() {

  int num;
  cin >> num;

  double grade[num];
  double max = 0;
  double avr = 0;

  for (int i = 0; i < num; i++) {
    cin >> grade[i];
    if (max < grade[i]) {
      max = grade[i];
    }
  }

  for (int i = 0; i < num; i++) {
    avr += grade[i] / max * 100;
  }
  avr = avr / num;
  cout << avr;
}

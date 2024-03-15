#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int arr[100];
  for (int i = 1; i <= n; i++) {
    arr[i] = i;
  }

  for (int i = 1; i <= m; i++) {
    int a, b;
    cin >> a >> b;

    for (int j = 0; j <= (b - a) / 2; j++) {
      swap(arr[a + j], arr[b - j]);
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
/*
12345
21345
21435
34125
*/
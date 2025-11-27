#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;

  cin >> a >> b;

  int a_cnt = 0;
  int b_cnt = 0;
  int tie = 0;

  for (int x = 1; x < 7; x++) {
    tie += abs(a - x) == abs(b - x);
    a_cnt += abs(a - x) < abs(b - x);
    b_cnt += abs(a - x) > abs(b - x);
  }
  cout << a_cnt << " " << tie << " " << b_cnt;

  return 0;
}

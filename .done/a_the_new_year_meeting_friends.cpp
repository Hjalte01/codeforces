// https://codeforces.com/problemset/problem/723/A
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector x(3, 0);
  for (int i = 0; i < 3; i++) {
    cin >> x[i];
  }

  nth_element(x.begin(), x.begin() + x.size() / 2, x.end(), [](int x1, int x2) {
    return x1 < x2;
  });

  cout << abs(x[1] - x[0]) + abs(x[2] - x[1]) << "\n";

  return 0;
}

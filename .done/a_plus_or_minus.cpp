// https://codeforces.com/problemset/problem/1807/A
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

  ll t, a, b, c;
  cin >> t;

  while (t--) {
    cin >> a >> b >> c;

    cout << (a + b == c ? '+' : '-') << "\n";
  }

  return 0;
}

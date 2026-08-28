// https://codeforces.com/problemset/problem/1971/A
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

  ll t;
  cin >> t;
  while (t--) {
    ll a, b;

    cin >> a >> b;

    if (a < b) {
      cout << a << " " << b << "\n";
    } else {
      cout << b << " " << a << "\n";
    }
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1283/A
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
    ll h, m;
    cin >> h >> m;
    cout << ((23 - h) * 60 + 60 - m) << "\n";
  }

  return 0;
}

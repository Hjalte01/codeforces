// https://codeforces.com/problemset/problem/1760/A
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
    ll a, b, c;
    cin >> a >> b >> c;
    ll min_num = min(min(a, b), c);
    ll max_num = max(max(a, b), c);
    cout << (a + b + c - min_num - max_num) << "\n";
  }

  return 0;
}

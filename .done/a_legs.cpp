// https://codeforces.com/problemset/problem/1996/A
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
    ll n;

    cin >> n;

    ll res = floor(n / 4);
    res += n % 4 >= 2;

    cout << res << "\n";
  }

  return 0;
}

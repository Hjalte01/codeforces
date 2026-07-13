// https://codeforces.com/contest/2241/problem/C

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
  string s;
  cin >> t;

  while (t--) {
    cin >> s >> s;

    ll cnt = 1;
    for (ll i = 0; i + 1 < s.size(); i++) {
      if (s[i] != s[i + 1])
        cnt++;
    }
    cout << (cnt == 2 ? 2 : 1) << "\n";
  }

  return 0;
}

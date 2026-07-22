// https://codeforces.com/problemset/problem/32/B
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

  string s;
  cin >> s;
  for (ll i = 0; i < s.size(); i++) {
    ll cnt = 0;
    if (s[i] == '.') {
      cout << cnt;
      continue;
    }
    cnt++;
    if (s[i + 1] == '-')
      cnt++;
    cout << cnt;
    i++;
  }

  return 0;
}

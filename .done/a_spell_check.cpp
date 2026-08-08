// https://codeforces.com/problemset/problem/1722/A
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
    string s;
    cin >> n >> s;

    if (n != 5) {
      cout << "NO\n";
      continue;
    }

    vector<char> v = {'T', 'i', 'm', 'u', 'r'};

    for (ll i = 0; i < n; i++) {
      for (auto j = v.begin(); j != v.end(); j++) {
        if (*j == s[i]) {
          v.erase(j);
          break;
        }
      }
    }
    cout << (v.size() == 0 ? "YES\n" : "NO\n");
  }

  return 0;
}

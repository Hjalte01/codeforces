// https://codeforces.com/problemset/problem/1619/A
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
    string s;
    cin >> s;
    ll N = s.length();
    bool is = false;

    if (N % 2 == 0) {
      is = s.substr(0, N / 2) == s.substr(N / 2, N) ? true : false;
    }

    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}

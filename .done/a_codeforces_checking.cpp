// https://codeforces.com/problemset/problem/1791/A
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
    char c;
    cin >> c;
    string s = "codeforces";
    bool is = false;

    for (char sc : s) {
      if (sc == c)
        is = true;
    }

    cout << (is ? "YES\n" : "NO\n");
  }

  return 0;
}

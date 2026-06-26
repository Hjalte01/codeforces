// https://codeforces.com/problemset/problem/510/A
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

  ll n, m;
  cin >> n >> m;

  string str;

  for (ll i = 1; i <= n; i++) {
    if (i % 2 == 1) {
      str += string(m, '#');
    } else {
      if (i % 4 == 0) {
        str += "#" + string(m - 1, '.');
      } else {
        str += string(m - 1, '.') + "#";
      }
    }
    str += "\n";
  }

  cout << str << endl;

  return 0;
}

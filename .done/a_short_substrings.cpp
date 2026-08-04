// https://codeforces.com/problemset/problem/1367/A
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
    string a, b;
    cin >> b;

    a = b[0];
    for (ll i = 1; i < b.size() - 1; i += 2) {
      a += b[i];
    }
    a += b[b.size() - 1];

    cout << a << "\n";
  }

  return 0;
}

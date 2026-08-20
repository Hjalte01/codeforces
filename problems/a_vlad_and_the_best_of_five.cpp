// https://codeforces.com/problemset/problem/1926/A
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
    ll N = 5;

    char c;
    ll is_A = 0;
    while (N--) {
      cin >> c;
      is_A += (c == 'A' ? 1 : -1);
    }
    cout << (is_A > 0 ? "A\n" : "B\n");
  }

  return 0;
}

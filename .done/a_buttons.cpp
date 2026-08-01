// https://codeforces.com/problemset/problem/1858/A
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

    if (c % 2 == 1)
      a++;

    cout << (a > b ? "First\n" : "Second\n");
  }

  return 0;
}

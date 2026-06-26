// https://codeforces.com/problemset/problem/1335/A
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

  ll t, n;
  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> n;

    cout << (ll)ceil((double)n / 2) - 1 << endl;
  }

  return 0;
}

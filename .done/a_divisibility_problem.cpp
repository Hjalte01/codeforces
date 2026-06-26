// https://codeforces.com/problemset/problem/1328/A
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

  ll t, a, b;
  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> a >> b;

    cout << (b - (a % b)) % b << endl;
  }

  return 0;
}

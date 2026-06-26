// https://codeforces.com/problemset/problem/1352/A
#include <bits/stdc++.h>
#include <cmath>
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

    vector<ll> vec;
    for (ll j = floor(log10(n)); j >= 0; j--) {
      ll val = pow(10, j);
      ll div = n / val;
      if (div < 1)
        continue;
      if (val < 10 && n > 0) {
        vec.push_back(n);
        break;
      }
      if (div % val != 0) {
        vec.push_back(div * val);
      }

      n -= div * val;
    }

    cout << endl
         << vec.size() << endl;
    for (ll i = 0; i < vec.size(); i++) {
      cout << vec[i] << ((i == vec.size() - 1) ? "" : " ");
    }
  }

  return 0;
}

// https://codeforces.com/problemset/problem/268/A
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

  ll n;
  cin >> n;
  ll h[n], a[n];

  for (ll i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
  }

  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      if (h[i] == a[j] && i != j)
        sum++;
    }
  }

  cout << sum << endl;

  return 0;
}

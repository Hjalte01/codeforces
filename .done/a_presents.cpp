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

  ll n, k;
  cin >> n;
  vector<pair<ll, ll>> v;

  for (ll i = 0; i < n; i++) {
    cin >> k;
    v.push_back(pair(k, i + 1LL));
  }
  sort(v.begin(), v.end());

  for (pair<ll, ll> elem : v) {
    cout << elem.S << " ";
  }

  return 0;
}

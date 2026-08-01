// https://codeforces.com/problemset/problem/490/A
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

  vector<ll> t(n);

  for (auto &x : t)
    cin >> x;

  vector<ll> t1, t2, t3;

  for (ll i = 0; i < n; i++) {
    ll val = t[i];

    if (val == 1)
      t1.push_back(i + 1);
    if (val == 2)
      t2.push_back(i + 1);
    if (val == 3)
      t3.push_back(i + 1);
  }

  ll min_val = min(min(t1.size(), t2.size()), t3.size());

  cout << min_val << "\n";

  for (ll i = 0; i < min_val; i++) {

    cout << t1[i] << " " << t2[i] << " " << t3[i] << "\n";
  }

  return 0;
}

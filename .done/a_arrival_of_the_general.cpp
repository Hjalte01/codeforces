// https://codeforces.com/problemset/problem/144/A
#include <algorithm>
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

  ll arr[100];

  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }
  ll sum = 0;
  pair<ll, ll> min_elm = {-1, INT32_MAX};
  pair<ll, ll> max_elm = {-1, 0};

  for (ll i = 0; i < n; i++) {
    ll val = arr[i];
    if (val <= min_elm.S)
      min_elm = {i, val};
    if (val > max_elm.S)
      max_elm = {i, val};
  }

  cout << (n - 1) - min_elm.F + max_elm.F - (min_elm.F < max_elm.F ? 1 : 0) << endl;

  return 0;
}

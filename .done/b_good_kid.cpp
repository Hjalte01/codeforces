// https://codeforces.com/problemset/problem/1873/B
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
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
    ll n;
    cin >> n;

    ll sum = 1;
    vector<int> v(n);

    for (auto &x : v)
      cin >> x;

    auto min_elem = min_element(v.begin(), v.end());

    (*min_elem)++;

    for (auto x : v)
      sum *= x;

    cout << sum << "\n";
  }

  return 0;
}

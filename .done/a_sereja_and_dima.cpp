// https://codeforces.com/problemset/problem/381/A
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

  ll sum1 = 0, sum = 0, i = 1;
  vector<ll> vec(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
  }

  while (vec.size() > 0) {
    ll sz = vec.size() - 1;
    if (vec[0] > vec[sz]) {
      sum1 += i * vec[0];
      sum += vec[0];
      vec.erase(vec.begin());
    } else {
      sum1 += i * vec[sz];
      sum += vec[sz];
      vec.pop_back();
    }
    i ^= 1;
  }

  cout << sum1 << " " << sum - sum1 << "\n";

  return 0;
}

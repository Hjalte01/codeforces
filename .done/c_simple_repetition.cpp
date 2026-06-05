#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

bool is_prime(ll num) {
  for (ll i = 2; i <= sqrt(num); i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}

ll x_k(ll x, ll k) {
  ll num = 0;
  for (ll i = 0; i < k; i++) {
    num += x * pow(100, i);
  }
  return num;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t, x, k;
  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> x >> k;
    cout << (is_prime(x_k(x, k)) && x_k(x, k) > 1 ? "YES" : "NO") << endl;
  }

  return 0;
}

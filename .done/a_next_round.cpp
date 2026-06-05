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
  cin >> n >> k;

  ll a[100];

  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (ll i = 0; i < n; i++) {
    if (a[i] >= a[k - 1] && a[i] > 0)
      sum++;
  }
  cout << sum;

  return 0;
}

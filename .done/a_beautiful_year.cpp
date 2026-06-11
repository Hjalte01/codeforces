#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

void distinct(ll &y) {
  for (ll i = pow(10, floor(log10(y))); i > 0; i /= 10) {
    for (ll j = i / 10; j > 0; j /= 10) {
      if ((y / i) % 10 == (y / j) % 10) {
        y += j - (y % j);
        return distinct(y);
      }
    }
  }
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll y;
  cin >> y;
  y++;

  distinct(y);

  cout << y;

  return 0;
}

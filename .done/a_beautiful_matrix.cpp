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

  ll n = 5;
  ll num;

  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= n; j++) {
      cin >> num;
      if (num == 1) {
        cout << abs(3 - j) + abs(3 - i);
        return 0;
      }
    }
  }

  return 0;
}

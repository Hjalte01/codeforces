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

  ll n, lucky_cnt = 0;
  cin >> n;

  for (ll i = 1; i < n; i *= 10) {
    if (n / i % 10 == 4 || n / i % 10 == 7) {
      lucky_cnt++;
    }
  }
  for (ll i = 1; i < n; i *= 10) {
    if (lucky_cnt % 10 == 4 || lucky_cnt % 10 == 7) {
      if (!(i * 10 < n)) {
        cout << "YES";
        return 0;
      }
    } else
      break;
  }
  cout << "NO";

  return 0;
}

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

  ll t, n, a, b;
  cin >> t;

  ll tmp;
  while (cin >> n >> a) {
    ll lowa = 0;
    for (int i = 0; i < n; i++) {
      cin >> tmp;
      if (tmp < a) {
        lowa++;
      }
      if (tmp > a) {
        lowa--;
      }
    }
    cout << (lowa > 0 ? a - 1 : a + 1) << endl;
  }

  return 0;
}

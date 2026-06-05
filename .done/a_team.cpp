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

  ll x1, x2, x3;
  ll total = 0;
  for (int i = 0; i < n; i++) {
    cin >> x1 >> x2 >> x3;
    if (x1 && x2 || x1 && x3 || x2 && x3) {
      total++;
    }
  }
  cout << total;

  return 0;
}

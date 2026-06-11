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

  ll n, h;
  cin >> n >> h;

  ll k, res = 0;
  while (cin >> k) {
    if (k > h)
      res++;
    res++;
  }
  cout << res << endl;

  return 0;
}

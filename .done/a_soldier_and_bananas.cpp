#include <algorithm>
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

  ll k, n, w;
  cin >> k >> n >> w;

  cout << max((w * (w + 1) / 2) * k - n, (ll)0) << endl;

  return 0;
}

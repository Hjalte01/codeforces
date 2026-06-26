// https://codeforces.com/problemset/problem/344/A
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
  int mag, mag_p = 0, sum = 0;
  cin >> n;

  for (ll i = 0; i < n; i++) {
    cin >> mag;
    if (mag_p != mag)
      sum++;
    mag_p = mag;
  }
  cout << sum << endl;

  return 0;
}

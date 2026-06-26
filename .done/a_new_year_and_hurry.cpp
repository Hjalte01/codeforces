// https://codeforces.com/problemset/problem/750/A
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

  ll i = 0;
  ll sum = 60 * 4 - k;
  if (sum <= 0) {
    cout << 0 << "\n";
    return 0;
  }
  while (sum >= 0) {
    i++;
    sum -= i * 5;
  }
  i--;

  cout << min(n, i) << "\n";

  return 0;
}

// https://codeforces.com/problemset/problem/1370/A
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

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;

    if (n % 2 == 1)
      n--;
    if (n < 2)
      cout << "1\n";
    cout << n / 2 << "\n";
  }

  return 0;
}

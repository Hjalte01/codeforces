// https://codeforces.com/problemset/problem/1899/A
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
  cin >> n;

  for (ll i = 0; i < n; i++) {
    cin >> k;
    cout << (k % 3 == 0 ? "Second" : "First") << "\n";
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1878/A
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

  ll t, n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    vector<ll> a(n);
    bool is = false;
    for (auto &x : a) {
      cin >> x;
      if (x == k)
        is = true;
    }

    cout << (is ? "YES" : "NO") << "\n";
  }

  return 0;
}

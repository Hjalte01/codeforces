// https://codeforces.com/contest/2242/problem/D
#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

ll check_prefix(string pre_a, string pre_b, ll idx_a, ll idx_b) {
  if (idx_a >= pre_a.size() || idx_b >= pre_b.size())
    return 0;

  if (pre_a[idx_a] == pre_b[idx_b])
    return 1 + check_prefix(pre_a, pre_b, idx_a + 1, idx_b + 1);

  return max(check_prefix(pre_a, pre_b, idx_a, idx_b + 1), check_prefix(pre_a, pre_b, idx_a + 1, idx_b));
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;

    string prefix_a = a, prefix_b = b;
    for (ll i = 1; i < a.size(); i++) {
      prefix_a[i] = ((prefix_a[i] + prefix_a[i - 1] - 2 * '0') % 10) + '0';
    }
    for (ll i = 1; i < b.size(); i++) {
      prefix_b[i] = ((prefix_b[i] + prefix_b[i - 1] - 2 * '0') % 10) + '0';
    }

    ll res = check_prefix(prefix_a, prefix_b, 0, 0);
    if (prefix_a[prefix_a.size() - 1] != prefix_b[prefix_b.size() - 1])
      res = -1;
    cout << res << "\n";
  }

  return 0;
}

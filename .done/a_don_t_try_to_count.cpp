// https://codeforces.com/problemset/problem/1881/A
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

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    int ans = -1;

    for (int cnt = 0; cnt <= 10; cnt++) {
      if (x.find(s) != string::npos) {
        ans = cnt;
        break;
      }

      x += x;
    }

    cout << ans << '\n';
  }

  return 0;
}

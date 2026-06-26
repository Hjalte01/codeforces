// https://codeforces.com/problemset/problem/469/A
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

bitset<101> bs;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, p, q, val;
  cin >> n;

  cin >> p;
  while (p > 0) {
    cin >> val;
    bs[val] = val;
    p--;
  }
  cin >> q;
  while (q > 0) {
    cin >> val;
    bs[val] = val;
    q--;
  }

  bs[0] = false;
  cout << (bs.count() == n ? "I become the guy." : "Oh, my keyboard!") << endl;

  return 0;
}

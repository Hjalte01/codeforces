// https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int is_prime(int val) {
  if (val < 2)
    return false;
  for (ll i = 2; i <= sqrt(val); i++) {
    if (val % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  bool is = true;
  if (is_prime(m)) {
    for (ll i = n + 1; i < m; i++) {
      if (is_prime(i)) {
        is = false;
        break;
      }
    }
  } else
    is = false;

  cout << (is ? "YES" : "NO");

  return 0;
}

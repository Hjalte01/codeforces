// https://codeforces.com/problemset/problem/705/A
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
  cin >> n;

  for (ll i = 0; i < n; i++) {
    if (i % 2 == 0) {
      cout << "I hate ";
    } else {
      cout << "I love ";
    }
    if (i + 1 >= n)
      cout << "it";
    else
      cout << "that ";
  }

  return 0;
}

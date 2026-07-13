// https://codeforces.com/problemset/problem/732/A
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

  ll k, r;
  cin >> k >> r;
  ll sum = 0, ksum = 0;

  while (true) {
    sum++;
    ksum += k;
    if (ksum % 10 == r || ksum % 10 == 0) {
      break;
    }
  }

  cout << sum << "\n";

  return 0;
}

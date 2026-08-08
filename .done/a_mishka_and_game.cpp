// https://codeforces.com/problemset/problem/703/A
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
  ll cnt = 0;
  while (n--) {
    ll m, c;
    cin >> m >> c;
    cnt += (m > c) ? 1 : (m < c) ? -1
                                 : 0;
  }
  cout << (cnt < 0 ? "Chris" : cnt > 0 ? "Mishka"
                                       : "Friendship is magic!^^");

  return 0;
}

// https://codeforces.com/problemset/problem/427/A
#include <algorithm>
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

  ll n, is_crime;
  cin >> n;

  ll sum = 0;
  ll officers = 0;
  for (ll i = 0; i < n; i++) {
    cin >> is_crime;
    if (is_crime > 0)
      officers = officers + is_crime;
    else {
      while (officers > 0 && is_crime < 0) {
        officers--;
        is_crime++;
      }
      sum += abs(is_crime);
    }
  }
  cout << sum << "\n";

  return 0;
}

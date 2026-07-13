// https://codeforces.com/problemset/problem/1669/A
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <string>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;

  ll k;
  map<ll, string> dict = {
      {INT32_MIN, "Division 4"},
      {1400, "Division 3"},
      {1600, "Division 2"},
      {1900, "Division 1"},
  };

  for (ll i = 0; i < t; i++) {
    cin >> k;

    for (auto it = dict.rbegin(); it != dict.rend(); ++it) {
      if (k < it->F)
        continue;
      else {
        cout << it->S << "\n";
        break;
      }
    }
  }

  return 0;
}

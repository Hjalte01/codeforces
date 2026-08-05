// https://codeforces.com/problemset/problem/1703/B
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

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    string s;
    cin >> n >> s;

    map<char, int> dict;

    ll cnt = 0;
    for (char c : s) {
      dict[c]++;
      if (dict[c] <= 1)
        cnt += 2;
      else
        cnt++;
    }
    cout << cnt << "\n";
  }

  return 0;
}

// https://codeforces.com/problemset/problem/228/A
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

  const ll N = 4;
  ll s[N], sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> s[i];
  }

  map<ll, ll> set;

  for (ll i = 0; i < N; i++) {
    if (!set[s[i]]) {
      set[s[i]] = 1;
      sum++;
    } else {
      set[s[i]]++;
    };
  }

  cout << 4 - sum << endl;

  return 0;
}

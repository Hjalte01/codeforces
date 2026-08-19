// https://codeforces.com/problemset/problem/431/A
#include <bits/stdc++.h>
#include <istream>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> a(4);

  for (auto &x : a)
    cin >> x;

  string s;
  cin >> s;

  ll sum = 0;
  for (auto c : s) {
    sum += a[c - '1'];
  }
  cout << sum;

  return 0;
}

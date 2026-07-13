// https://codeforces.com/problemset/problem/581/A
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

  ll a, b;
  cin >> a >> b;

  cout << min(a, b) << " " << abs(a - b) / 2;

  return 0;
}

// https://codeforces.com/problemset/problem/472/A
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

  if (n % 2 == 0) {
    cout << 4 << " " << n - 4;
  } else {
    cout << 9 << " " << n - 9;
  }

  return 0;
}

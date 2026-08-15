// https://codeforces.com/problemset/problem/492/A
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
  ll sum = 1, i = 1, sum_i = 1;

  while (sum <= n) {
    i++;
    sum_i += i;
    sum += sum_i;
  }

  cout << i - 1;

  return 0;
}

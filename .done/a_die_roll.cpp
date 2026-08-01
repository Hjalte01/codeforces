// https://codeforces.com/problemset/problem/9/A
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

  double a, b;

  cin >> a >> b;

  int num = 7 - max(a, b);
  int denum = 6;

  int divisor = gcd(num, denum);

  cout << num / divisor << "/" << denum / divisor;

  return 0;
}
// 1/6
// 2/6 => 1/3
// 3/6 => 1/2
// 4/6 => 2/3
// 5/6
// 6/6 => 1/1

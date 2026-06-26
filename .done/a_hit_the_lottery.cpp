// https://codeforces.com/problemset/problem/996/A
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

  const int N = 5;
  ll arr[N] = {1, 5, 10, 20, 100};
  int i = N - 1;
  int sum = 0;
  while (n > 0) {
    sum += n / arr[i];
    n = n % arr[i];
    i--;
  }

  cout << sum << endl;

  return 0;
}

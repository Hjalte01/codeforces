// https://codeforces.com/contest/432/problem/A
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

  ll n, k;
  cin >> n >> k;

  ll const MEM_CHAMP = 5;
  ll const MEM_ATT = 3;

  ll cnt = 0, mem;
  ll mem1 = 0, mem2 = 0;
  for (ll i = 0; i < n; i++) {
    cin >> mem;

    mem = MEM_CHAMP - mem;
    mem /= k;
    if (mem == 1)
      mem1++;
    if (mem > 1)
      mem2++;
  }

  cout << (mem2 / MEM_ATT + (mem1 + (mem2 % MEM_ATT)) / MEM_ATT);

  return 0;
}

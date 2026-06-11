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

  for (int i = 0; i < k; i++) {
    if (n % 10 == 0)
      n /= 10;
    else
      n--;
  }

  cout << n << endl;
  return 0;
}

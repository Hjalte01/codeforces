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

  cout << ((n % 2 == 0) ? (n + 1) / 2 : -(n + 1) / 2) << endl;

  return 0;
}

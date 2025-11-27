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

  ll t, n;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n;
    cout << n % 10 + n / 10 << endl;
  }

  return 0;
}

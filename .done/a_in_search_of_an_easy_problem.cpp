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

  ll n, tmp;

  cin >> n;

  for (ll i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp == 1) {
      cout << "HARD";
      return 0;
    }
  }

  cout << "EASY";

  return 0;
}

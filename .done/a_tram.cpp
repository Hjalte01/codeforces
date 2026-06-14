#include <bits/stdc++.h>
#include <limits>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

ll tram() {
  ll a, b, sum;
  if (cin >> a >> b) {
    sum = b - a;
    // cout << b << " - " << a << " = " << sum << endl;
    return max(sum, tram() + sum);
  } else {
    return 0;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << tram() << endl;

  return 0;
}

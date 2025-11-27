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

  double n;
  cin >> n;
  double k, sum = 0.0;
  for (int i = 0; i < n; i++) {
    cin >> k;
    sum += k;
  }
  cout << sum / n;
  return 0;
}

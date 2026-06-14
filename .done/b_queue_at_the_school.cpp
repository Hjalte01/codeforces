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

  ll n, t;
  string s;

  cin >> n >> t >> s;

  for (ll j = 0; j < t; j++) {
    for (ll i = 0; i < s.size() - 1; i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        swap(s[i], s[i + 1]);
        i++;
      }
    }
  }
  cout << s << endl;
  return 0;
}

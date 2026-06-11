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

  ll n, res = 0;
  string s;
  cin >> n >> s;

  char last_char;

  for (char c : s) {
    if (c == last_char)
      res++;
    last_char = c;
  }
  cout << res << endl;

  return 0;
}

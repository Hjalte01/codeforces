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

  string s, t;
  cin >> s >> t;
  reverse(s.begin(), s.end());
  if (s == t)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}

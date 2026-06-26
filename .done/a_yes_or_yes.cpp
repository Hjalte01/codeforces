// https://codeforces.com/problemset/problem/1703/A
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;

  string str;

  for (ll i = 0; i < t; i++) {
    cin >> str;

    for (char &c : str)
      c = tolower(c);

    cout << (str == "yes" ? "YES" : "NO") << "\n";
  }

  return 0;
}

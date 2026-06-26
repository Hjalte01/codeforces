// https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>
#include <bitset>
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

  ll n;
  cin >> n;

  string str;
  getline(cin >> ws, str);

  bitset<30> bs;

  for (ll i = 0; i < n; i++) {
    int val = tolower(str[i]) - 'a';
    bs[val] = true;
  }

  cout << (bs.count() >= 26 ? "YES" : "NO") << endl;

  return 0;
}

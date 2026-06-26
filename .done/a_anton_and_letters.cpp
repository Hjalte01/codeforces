// https://codeforces.com/problemset/problem/443/A
#include <bits/stdc++.h>
#include <cctype>
#include <string>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string str;
  getline(cin >> ws, str);

  bitset<26> bs;

  for (ll i = 0; i < str.length(); i++) {
    char c = str[i];
    if (c == '{' || c == ',' || c == ' ' || c == '}')
      continue;
    bs[tolower(c) - 'a'] = true;
  }

  cout << bs.count() << endl;

  return 0;
}

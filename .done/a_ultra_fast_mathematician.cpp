// https://codeforces.com/problemset/problem/61/A
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

  string s1, s2;
  cin >> s1 >> s2;

  string res;
  for (int i = 0; i < s1.size(); i++) {
    res += (s1[i] ^ s2[i]) + '0';
  }

  cout << res << endl;

  return 0;
}

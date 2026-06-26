// https://codeforces.com/problemset/problem/141/A
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

  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  map<char, int> dict;
  if (s1.length() + s2.length() != s3.length()) {
    cout << "NO" << endl;
    return 0;
  }
  for (char c : s1) {
    dict[c]++;
  }
  for (char c : s2) {
    dict[c]++;
  }

  for (char c : s3) {
    dict[c]--;
    if (dict[c] < 0) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}

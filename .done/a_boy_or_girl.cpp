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

  ll total = 0;
  map<char, int> m;
  string s;
  cin >> s;


  for (char c : s) {
     m[c]++;
     if (m[c] == 1) total++;
  }

  total % 2 == 0 ? cout << "CHAT WITH HER!": cout << "IGNORE HIM!";

  return 0;
}

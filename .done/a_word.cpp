#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  // lc => lower count if >= 0 then lower- else upper-case
  int lc = 0;

  for (int i = 0; i < s.length(); i++) {
    if (islower(s[i])) {
      lc++;
      continue;
    }
    lc--;
  }

  transform(s.begin(), s.end(), s.begin(),
            [lc](char c) { return lc >= 0 ? tolower(c) : toupper(c); });

  cout << s << endl;

  return 0;
}

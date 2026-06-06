
#include <bits/stdc++.h>
#include <locale>

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

  for (int i = 0; i < s1.size(); i++) {
    if (tolower(s1[i]) < tolower(s2[i])) {
      cout << "-1";
      return 0;
    }
    if (tolower(s1[i]) > tolower(s2[i])) {
      cout << "1";
      return 0;
    }
  }

  cout << "0";
  return 0;
}

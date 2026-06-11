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

  ll n, Asum;
  string s;
  cin >> n >> s;

  Asum = count(s.begin(), s.end(), 'A');

  if (n - Asum == Asum)
    cout << "Friendship" << endl;
  else if (n - Asum < Asum)
    cout << "Anton" << endl;
  else if (n - Asum > Asum)
    cout << "Danik" << endl;

  return 0;
}

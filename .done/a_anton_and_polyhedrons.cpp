// https://codeforces.com/problemset/problem/785/A
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

  ll n;
  cin >> n;

  map<string, ll> dict = {
      {"Tetrahedron", 4},
      {"Cube", 6},
      {"Octahedron", 8},
      {"Dodecahedron", 12},
      {"Icosahedron", 20},
  };
  ll sum = 0;
  string str;
  for (ll i = 0; i < n; i++) {
    cin >> str;
    sum += dict[str];
  }

  cout << sum << endl;

  return 0;
}

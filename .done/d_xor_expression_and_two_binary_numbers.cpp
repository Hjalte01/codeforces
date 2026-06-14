#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

ll steps = 0;
const ll STEP_LIMIT = 100'000;

void check_timeout() {
  steps++;
  if (steps > STEP_LIMIT) {
    cerr << "Stopped: too many steps, possible infinite loop/recursion" << endl;
    exit(1);
  }
}

string string_xor(string s1, string s2) {
  string res = "";
  for (ll i = 0; i < s1.size(); i++) {
    res.push_back('0' + ((s1[i] - '0') ^ (s2[i] - '0')));
  }
  return res;
}

ll count_bit_mult(string num, ll n) {
  ll one_sum = 0;
  for (char c : num) {
    if (c == '1')
      one_sum++;
  }
  return (n - one_sum) * one_sum;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t, n, k;
  cin >> t;

  ll a1, ak1;
  for (ll i = 0; i < t; i++) {
    cin >> n >> k;
    string sa1, sak1;
    cin >> sa1 >> sak1;

    const ll kN = pow(2, k) + 1;

    ll res = 0;
    ll pattern_l, pattern_r;
    pattern_l = count_bit_mult(sa1, n) + count_bit_mult(sak1, n);
    string mid = string_xor(sa1, sak1);
    pattern_r = count_bit_mult(mid, n);

    res = pattern_l * (kN / 3LL + (kN % 3LL) / 2LL);
    res += pattern_r * (kN / 3LL);

    cout << res << endl;
  }

  return 0;
}

#include <iostream>
#include <string>
#include <vector>

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string s;
  std::cin >> s;

  std::vector<std::string> v = {"", "", ""};

  std::string val;

  for (int i = 0; i < int(s.length()); i += 2) {
    val = s[i];
    v[val[0] - '1'] += val + "+";
  }

  std::string res;
  for (auto elem : v) {
    res += elem;
  }
  res = res.substr(0, res.size() - 1);
  std::cout << res << std::endl;

  return 0;
}

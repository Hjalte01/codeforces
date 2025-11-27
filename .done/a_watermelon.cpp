#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  scanf("%d", &n);

  printf("%s", n % 2 == 0 && n > 2 ? "YES" : "NO");

  return 0;
}

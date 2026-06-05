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
    ll total = 0;
    cin >> n;

    char c;
    for (ll i = 0; i < n; i++) {
        cin >> c >> c;
        if (c == '+') total++;
        else total--;
        cin >> c;
    } 
    cout << total;



    
    return 0;
}

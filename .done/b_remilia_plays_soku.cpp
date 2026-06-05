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
    
    ll t;
    cin >> t;
    
    ll n, x1, x2, k;
    for (ll i = 0; i < t; i++) {
        cin >> n >> x1 >> x2 >> k;
        if (n <= 3) cout << 1 << endl;
        else {
            cout << min(abs(x1-x2), n-abs(x2-x1))+k << endl;
        }
    }
    
    return 0;
}


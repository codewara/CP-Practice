#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ll n; cin >> n;
    ll maxval = -1, sumval = 0;
    for (int i = 1; i <= n; i++) {
        ll x; cin >> x;
        sumval += x;
        maxval = max (maxval, x);
    }

    cout << ((sumval / 3 < sumval - maxval) ? sumval / 3 : sumval - maxval) << endl;
}
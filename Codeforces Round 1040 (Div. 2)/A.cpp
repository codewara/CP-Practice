/*
Codeforces Round 1040 (Div. 2)
[A] Submission is All You Need (https://codeforces.com/contest/2130/problem/A)

Solved by   : codewara
Solved date : 31-07-2025
*/

#include <bits/stdc++.h>
#define dd cout << "test" << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

void solve () {
    int n, x; cin >> n;
    int res = 0;
    rep (i, 0, n) cin >> x, res += (x == 0) + x;
    cout << res << endl;
}

signed main () {
    skibidi dop dob
    int t = 1; cin >> t;
    while (t--) solve ();
    return 0;
}

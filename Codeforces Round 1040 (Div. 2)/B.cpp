/*
Codeforces Round 1040 (Div. 2)
[B] Pathless (https://codeforces.com/contest/2130/problem/B)

Solved by   : codewara
Solved date : 01-08-2025
*/

#include <bits/stdc++.h>
#define dd cout << "test" << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define vi vector<int>
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

void solve () {
    int n, x, s; cin >> n >> s;
    vi a(3); rep(i, 0, n) cin >> x, a[x]++;

    if (s == a[1] + 2 * a[2] || s >= a[1] + 2 * a[2] + 2) { cout << -1 << endl; return; }
    rep (i, 0, a[0]) cout << 0 << ' ';
    rep (i, 0, a[2]) cout << 2 << ' ';
    rep (i, 0, a[1]) cout << 1 << (i == a[1] - 1 ? '\n' : ' ');
}

signed main () {
    skibidi dop dob
    int t = 1; cin >> t;
    while (t--) solve ();
    return 0;
}

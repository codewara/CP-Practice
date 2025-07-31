/*
Codeforces Round 1040 (Div. 2)
[B] Pathless (https://codeforces.com/contest/2130/problem/B)
*/

#include <bits/stdc++.h>
#define dd cout << "test" << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define fi first
#define se second
#define lf long double
#define int long long
#define mp make_pair
#define pb push_back
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define atv(x, y) (x).begin() + (y)
#define all(x) (x).begin(), (x).end()
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;
const int MAX = LLONG_MAX;
const int MIN = LLONG_MIN;

void solve () {
    int n, s; cin >> n >> s;
    vi a(n);
    int sum = 0, c1 = 0, c2 = 0;
    rep(i, 0, n) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1) c1++;
        if (a[i] == 2) c2++;
    }

    if (s == sum) {
        cout << -1 << endl;
        return;
    } else if (s < sum) {
        rep (i, 0, n) cout << a[i] << (i == n - 1 ? "\n" : " ");
        return;
    }

    vi comb(n, 0);
    if ((s - sum) % 3 != 0) {
        comb[n - 1] = 2; comb[n - 2] = 1;
        c2--; c1--;
    } else if ((s - sum) % 2 != 0 && c1 >= 2) {
        comb[n - 1] = 1; comb[n - 2] = 1;
        c1 -= 2;
    } else if ((s - sum) % 4 == 0 && c2 >= 2) {
        comb[n - 1] = 2; comb[n - 2] = 2;
        c2 -= 2;
    } else {
        cout << -1 << endl;
        return;
    }

    per (i, n - 3, 0) {
        if (c2 > 0) {
            comb[i] = 2;
            c2--;
        } else if (c1 > 0) {
            comb[i] = 1;
            c1--;
        }
    } rep(i, 0, n) cout << comb[i] << (i == n - 1 ? "\n" : " ");
}

signed main () {
    skibidi dop dob
    int t = 1; cin >> t;
    while (t--) solve ();
    return 0;
}

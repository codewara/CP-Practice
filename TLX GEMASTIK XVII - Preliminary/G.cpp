/*
GEMASTIK XVII 2024 - Penyisihan
[G] Reseller Topi Gemastik (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/G)

Solved by   : codewara
Solve date  : 27-07-2025
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
    int N; cin >> N;
    vi buy(N), sell(N);
    rep (i, 0, N) cin >> buy[i];
    rep (i, 0, N) cin >> sell[i];

    if (N < 3) {
        cout << "tidak mungkin" << endl;
        return;
    } else if (N == 3) {
        if (sell[2] > buy[0]) cout << sell[2] - buy[0] << endl;
        else cout << "tidak mungkin" << endl;
        return;
    }
    
    int profit = sell[N - 1] - buy[N - 3];
    int max_sell = sell[N - 1];
    per (i, N - 4, 0) {
        max_sell = max(max_sell, sell[i + 2]);
        profit = max(profit, max_sell - buy[i]);
    }
    
    if (profit > 0) cout << profit << endl;
    else cout << "tidak mungkin" << endl;
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

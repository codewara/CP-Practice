/*
GEMASTIK XVII 2024 - Penyisihan
[I] Diskon 50%, S&K Berlaku (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/I)

Solved by   : codewara
Solve date  : 29-07-2025
*/

#include <bits/stdc++.h>
#define dd(x) cout << x << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define lla(x) (x).rbegin(), (x).rend()
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

void solve () {
    int N, Q; cin >> N >> Q;
    vi A(N), ans(N); int sum = 0;
    rep (i, 0, N) cin >> A[i], sum += A[i];

    sort(all(A));
    rep (i, 2, N + 1) {
        ans[i] = sum;
        for (int j = N - i; j >= 0; j -= i) ans[i] -= (A[j] / 2);
    }

    while (Q--) {
        int X; cin >> X;
        if (X > N) cout << sum << endl;
        else cout << ans[X] << endl;
    }
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

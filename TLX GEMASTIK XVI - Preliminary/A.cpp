/*
GEMASTIK XVI - Preliminary
[A] Es Kopi Boba (https://tlx.toki.id/problems/gemastik-2023-pemrograman-penyisihan/A)

Solved by   : codewara
Solve date  : 06-08-2025
*/

#include <bits/stdc++.h>
#define dd(x) cout << (x) << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define vi vector<int>
#define um(x) unordered_map<int, x>
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

void solve () {
    int N, sum = 0; cin >> N;
    vi V(N); rep (i, 0, N) cin >> V[i], sum += V[i];
    if (sum % N != 0) { cout << "TIDAK SESUAI" << endl; return; }
    int ineq = 0; sum /= N; um(int) move;
    rep (i, 0, N) if (V[i] != sum) ineq++, move[i + 1] = V[i];

    if (ineq == 0) { cout << "SESUAI" << endl; return; }
    if (ineq > 2) { cout << "TIDAK SESUAI" << endl; return; }

    int k1 = -1, v1 = -1;
    for (auto [k2, v2] : move) {
        if (v2 != sum) {
            if (k1 == -1) k1 = k2, v1 = v2;
            else {
                if (v2 > v1) cout << (v2 - v1) / 2 << " " << k2 << " " << k1 << endl;
                else cout << (v1 - v2) / 2 << " " << k1 << " " << k2 << endl;
            }
        }
    }
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

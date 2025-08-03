/*
GEMASTIK XVII - Final
[A2] Antibakteri (https://tlx.toki.id/problems/gemastik-2024-pemrograman-final/A2)

Solved by   : codewara
Solve date  : 03-08-2025
*/

#include <bits/stdc++.h>
#define dd(x) cout << (x) << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

void solve () {
    int N, wins = 0; cin >> N;
    while (N--) {
        char T; int X, Y;
        cin >> T >> Y >> X;
        if (T == 'D') wins ^= X ^ Y;
        else if (T == 'K') wins ^= Y;
        else wins ^= X;
    }

    if (wins) cout << "Gema" << endl;
    else cout << "Astik" << endl;
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

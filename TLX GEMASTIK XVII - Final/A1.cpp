/*
GEMASTIK XVII - Final
[A1] Antibakteri (https://tlx.toki.id/problems/gemastik-2024-pemrograman-final/A1)

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
    int N; cin >> N;
    char T; int X, Y;
    cin >> T >> Y >> X;

    if ((T != 'D' || X != Y) && (T != 'K' || Y != 0) && (T != 'A' || X != 0)) cout << "Gema" << endl;
    else cout << "Astik" << endl;
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

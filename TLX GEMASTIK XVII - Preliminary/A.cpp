/*
GEMASTIK XVII 2024 - Penyisihan
[A] Makan Lumpia (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/A)

Solved by   : codewara
Solve date  : 26-07-2025
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
#define vi vector<int>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

const int MOD = 1e9 + 7;

signed main () {
    skibidi dop dob
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int res = 0;
    if (!B && !C) res += (A + D + 2) / 3;
    else if (!B) res += (A + C + 2) / 3 + (D + 2) / 3;
    else if (!C) res += (A + 2) / 3 + (B + D + 2) / 3;    
    else res += (A + 2) / 3 + (B + C + 2) / 3 + (D + 2) / 3;
    cout << res << endl;

    return 0;
}

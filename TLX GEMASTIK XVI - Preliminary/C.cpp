/*
GEMASTIK XVI - Preliminary
[C] MinES (https://tlx.toki.id/problems/gemastik-2023-pemrograman-penyisihan/C)

Solved by   : codewara
Solve date  : 07-08-2025
*/

#include <bits/stdc++.h>
#define dd(x) cout << (x) << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define vi vector<int>
#define rep(i, x, y) for (int i = (x); i < (y); i++)
using namespace std;

void decode (char x, char y) {
    if (x == 'A' && y == 'A') cout << "BB";
    else if (x == 'A' && y == 'B') cout << "BD";
    else if (x == 'A' && y == 'C') cout << "DD";
    else if (x == 'A' && y == 'D') cout << "CA";

    else if (x == 'B' && y == 'A') cout << "CD";
    else if (x == 'B' && y == 'B') cout << "AA";
    else if (x == 'B' && y == 'C') cout << "AC";
    else if (x == 'B' && y == 'D') cout << "BC";

    else if (x == 'C' && y == 'A') cout << "AB";
    else if (x == 'C' && y == 'B') cout << "CC";
    else if (x == 'C' && y == 'C') cout << "DB";
    else if (x == 'C' && y == 'D') cout << "CB";

    else if (x == 'D' && y == 'A') cout << "BA";
    else if (x == 'D' && y == 'B') cout << "DC";
    else if (x == 'D' && y == 'C') cout << "AD";
    else if (x == 'D' && y == 'D') cout << "DA";
}


void solve () {
    char code[1001], ch[2], c;
    int N = 1, idx = 0;
    while (c != '\n') cin.get(c), code[N++] = c;

    rep (i, 1, N + 1) {
        idx = idx % 2;
        ch[idx++] = code[i];
        if (i % 2 == 0) decode (ch[0], ch[1]);
    }
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

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

/*
Brief Problem Statement:
You have four types of lumpia: A, B, C, and D. You can eat a maximum of 3 lumpia in a day.
You can't eat lumpia A and B on the same day, and you can't eat lumpia C and D on the same day.
You should eat lumpia A first, then B, then C, and finally D.
You need to determine the minimum number of days required to eat all the lumpia.

Solution:
1. If both B and C are zero, we can eat A and D together.
2. If only B is zero, we can eat A and C together, and then D.
3. If only C is zero, we can eat A first, then B and D together.
4. If no lumpia is zero, we can eat A first, then B and C together, and finally D.
The result is calculated based on how many lumpia can be eaten in a day (3 lumpia max).
*/

/*
GEMASTIK XVII 2024 - Penyisihan
[F] Serangan Benteng (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/F)

Solved by   : codewara
Solve date  : 30-07-2025
*/

#include <bits/stdc++.h>
#define dd(x) cout << x << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
using namespace std;

unordered_map<int, int> memo;

int count_cost(int A, int P, int Q) {
    if (A < 2) return A;
    if (memo.count(A)) return memo[A];

    int cost = A;
    if (A % 2 == 0) cost = min(cost, count_cost(A / 2, P, Q) + P);
    else cost = min(cost, count_cost(A / 2, P, Q) + P + 1);

    if (A % 3 == 0) cost = min(cost, count_cost(A / 3, P, Q) + Q);
    else if (A % 3 == 1) cost = min(cost, count_cost(A / 3, P, Q) + Q + 1);
    else cost = min(cost, count_cost(A / 3, P, Q) + Q + 2);

    return memo[A] = cost;
}

void solve () {
    int A, N, P, Q; cin >> N >> P >> Q;
    while (N--) cin >> A, cout << count_cost (A, P, Q) << endl;
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

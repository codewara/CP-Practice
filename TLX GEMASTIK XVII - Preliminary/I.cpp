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

/*
Brief Problem Statement:
Given N books and Q days. Each book has a price Aᵢ. On the i-th day, you can buy at most Xᵢ books in each transaction.
If you buy exactly Xᵢ books, you will get a 50% discount on the cheapest book rounded down.
You can buy books in multiple transactions on the same day.
You need to determine the minimum amount of money you need to spend to buy all books for each day.

Solution:
1. Sort the array A in ascending order.
2. Precompute the total cost for buying books in groups of size 2 to N.
3. For each query, if Xᵢ is greater than N, output the total sum of prices; otherwise, output the precomputed cost for that group size.
The precomputation allows for efficient querying, as it avoids recalculating the total cost for each query.
*/

/*
GEMASTIK XVII 2024 - Penyisihan
[J] Tupai Loncat (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/J)

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

const int MOD = 1e9 + 7;

void solve () {
    int N; cin >> N;
    vi v(N);
    rep (i, 0, N) cin >> v[i];
    sort(all(v));
    int maximal = abs(v[0] - v[N - 1]);
    int minimal = 0;
    rep (i, 0, N - 1) {
        int temp = abs(v[i] - v[i + 1]);
        minimal = max(minimal, temp);
    }

    cout << minimal << endl << maximal << endl;
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

/*
Brief Problem Statement:
Given N poles with their heights in an array.
You need to determine the maximum and minimum highest difference between any two poles.

Solution:
1. Sort the array of heights.
2. The maximum highest difference is the difference between the tallest and shortest pole.
3. The minimum highest difference is the maximum difference between any two adjacent poles in the sorted array.
4. Print the minimum and maximum highest differences.
*/

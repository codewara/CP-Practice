/*
Codeforces Round 1040 (Div. 2)
[A] Submission is All You Need (https://codeforces.com/contest/2130/problem/A)

Solved by   : codewara
Solved date : 31-07-2025
*/

#include <bits/stdc++.h>
#define dd cout << "test" << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

void solve () {
    int n, x; cin >> n;
    int res = 0;
    rep (i, 0, n) cin >> x, res += (x == 0) + x;
    cout << res << endl;
}

signed main () {
    skibidi dop dob
    int t = 1; cin >> t;
    while (t--) solve ();
    return 0;
}

/*
Brief Problem Statement:
Given n integers and initial score of 0. Every integers registered to S[].
You can take x = subset of S[] and perform the following operation:
- Get mex(x) = smallest non-negative integer not in x. Then remove x from S[] and add mex(x) to the score.
- Get sum(x) = sum of all elements in x. Then remove x from S[] and add sum(x) to the score.
Find the maximum score possible after performing all operations.

Solution:
1. If the input contains 0, take x as {0} and add 1 to the score. (mex({0}) = 1)
2. Any other positive integers can be taken as x, and their sum can be added to the score. (sum(x) = sum of all elements in x)
The final score is the count of zeros plus the sum of all positive integers in the input.
*/

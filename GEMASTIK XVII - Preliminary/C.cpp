/*
GEMASTIK XVII 2024 - Penyisihan
[C] Piknik (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/C)

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
    int N, M; cin >> N >> M;
    vvi v(N + 1);
    rep (i, 0, M) {
        int X, Y; cin >> X >> Y;
        v[X].pb(Y);
        v[Y].pb(X);
    }
    vi visited(N + 1, 0);
    int res = 0;
    rep (i, 1, N + 1) {
        if (!visited[i] && !v[i].empty()) {
            qi q; q.push(i);
            visited[i] = 1;
            while (!q.empty()) {
                int curr = q.front(); q.pop();
                for (int next : v[curr]) {
                    if (!visited[next]) {
                        visited[next] = 1;
                        q.push(next);
                    }
                }
            } res++;
        }
    }

    int rem = 0;
    rep (i, 1, N + 1) if (!visited[i]) rem++;
    cout << (rem > 1 ? res + 1 : res) << endl;
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

/*
Brief Problem Statement:
Given N people and M pairs of friendships. Each friendship can sit in a group together.
If there are people who are not friends with anyone, they can form a new group.
IF there is only one person left without friends, they can join the existing group.
You need to determine the minimum number of groups that can be formed.

Solution:
1. Create an adjacency list to represent friendships.
2. Use BFS to traverse through each connected component of the graph.
3. Count the number of connected components (groups).
4. If there are unvisited nodes after BFS, they can form a new group. But if only one unvisited node remains, it can join an existing group.
5. Print the total number of groups formed.
*/

/*
ICPC Jakarta 2023
[M] Triangle Construction (https://tlx.toki.id/problems/icpc-jakarta-2023/M)

Solved by   : codewara
Solve date  : 30-11-2024
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ll N; cin >> N;
    ll maxval = -1, sumval = 0;
    for (int i = 1; i <= N; i++) {
        ll A; cin >> A;
        sumval += A;
        maxval = max (maxval, A);
    }

    cout << min(sumval / 3, sumval - maxval) << endl;
}

/*
Brief Problem Statement:
Given a regular N-sided polygon. Each Aᵢ represents how many points in the i-th side of the polygon.
These points are positioned such that side i is divided into Aᵢ + 1 segments with equal length.
You need to form triangles using these points. Triangles must be non-degenerate (positive area) and must not intersect.
You need to determine the maximum number of such triangles that can be formed.

​Solution:
1. Calculate the total number of points across all sides.
2. Find the maximum number of points on any single side.
3. The maximum number of triangles that can be formed is:
   - (total points / 3) if it is less than the total points minus the maximum points on a single side, or
   - (total points - maximum points on a single side) otherwise.

Explanation:
You need 3 non-collinear points to form the triangle. Since each side is straight, all the points on a single side are collinear.
So, for any valid triangle, you must choose points from at least 2 different sides.
- We are given that there are exactly Aᵢ inner points per side. The total number of points, then, is the sum of all Aᵢ.
- The maximum number of triangles is limited by the total number of points divided by 3, as each triangle requires 3 points.
- The number of triangles is limited by the total points not on the side with the most points,
  since each triangle can use at most one point from that side. That is total points minus the maximum points on a single side.
*/
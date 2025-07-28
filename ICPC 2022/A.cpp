/*
INC 2022
[R] Party Medley (https://tlx.toki.id/problems/inc-2022/R)

Solved by   : codewara
Solve date  : 25-10-2024
*/

#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
#define MIN -1000000
using namespace std;

int main () {
    ll N, M; cin >> N >> M;
    ll R[N];
    for (ll i = 0; i < N; i++) {
        cin >> R[i];
    }
    ll score = MIN, diff = MAX, count = 0;
    if (N >= 3) {
        for (ll i = 0; i < N; i++) {
            for (ll j = i + 1; j < N; j++) {
                for (ll k = j + 1; k < N; k++) {
                    ll curdiff = max(R[i], max(R[j], R[k])) - min(R[i], min(R[j], R[k]));
                    ll cursum = R[i] + R[j] + R[k];
                    if (curdiff < diff) diff = curdiff;
                    if (curdiff <= M) count++;
                    if (cursum > score && curdiff <= M) score = cursum;
                }
            }
        }
    } ((count == 0) ? (cout << -1) : (cout << count << " " << score)) << endl;
}

/*
Given N students, numbered from 1 to N, Student i has a rating of Rᵢ representing their estimated skill.
You have to send a team consists of exactly 3 different students. Their rating difference is max(Rᵢ, Rⱼ, Rₖ) − min(Rᵢ, Rⱼ, Rₖ).
A team is balanced if their rating difference is no more than a threshold of M.
Two team configurations are different if and only if there is at least one different student between those team
configurations.

Solution:
1. Iterate through all combinations of three students (i, j, k) where i < j < k.
2. For each combination, calculate the rating difference and the sum of their ratings.
3. Keep track of the number of balanced teams and the maximum score among them.
4. If no balanced teams are found, output -1; otherwise, output the count and the maximum score.
*/

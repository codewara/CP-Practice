# Codeforces Round 1040 (Div. 2) || 31 July 2025
## [Editorial](https://codeforces.com/blog/entry/145152) || [Complete Problemset](https://codeforces.com/contest/2130/problems)

## A. [Submission is All You Need](https://codeforces.com/contest/2130/problem/A)
### Tags: Greedy Algorithm, Data Structures, Set
> **[My Solution](A.cpp)**
```
Brief Problem Statement:
Given n integers and initial score of 0. Every integers registered to S[].
You can take x = subset of S[] and perform the following operation:
- Get mex(x) = smallest non-negative integer not in x. Then remove x from S[] and add mex(x) to the score.
- Get sum(x) = sum of all elements in x. Then remove x from S[] and add sum(x) to the score.
Find the maximum score possible after performing all operations.

Solution:
1. If the input contains 0, take x = {0} and add 1 to the score. (mex({0}) = 1)
2. Repeat the process for all zeros in the input, so the score increases by 1 for each zero.
3. For any other positive integers, they can be taken as a single set of y (y = {non-zero integers}).
   mex(y) < max(y) < sum(y), so we can take the sum of all positive integers for the maximum score.
The final score is basically the count of zeros plus the sum of all positive integers in the input.

score = count(0) + sum(non-zero integers)
```

## B. [Pathless](https://codeforces.com/contest/2130/problem/B)
### Tags: Greedy Algorithm, Case Analysis, Constructive Algorithms
> **[My Solution](B.cpp)**
```
Brief Problem Statement:
Given an array of n integers consisting of values 0, 1, and 2, and an integer s.
It is guaranteed that the array contains at least one 0, one 1, and one 2.
You have to start from the leftmost element and reach the rightmost element.
You can only move to adjacent elements. As you move, you sum the values of the visited elements.
You need to rearrange the array to prevent achieving the target sum s, no matter how you move.
Determine if it is possible to rearrange the array so that you cannot achieve the sum s.
If possible, output the rearranged array; otherwise, output -1.

Solution:
1. The minimum path sum is the sum of the array in order, so if s = minimum path sum, output -1.
   Because any arrangement with linear traversal will yield the same sum. (exactly s or achievable)
2. If s < minimum path sum, output any arrangement; because it's always exceeding s with the minimum path.
3. If s > minimum path sum, to achieve a sum greater than the minimum path sum is by back-and-forth moves.
   back-and-forth moves can only increase the sum by the sum of adjacent pairs. (e.g., 0+1, 2+1, 2+2, etc.)
4. let d = extra moves needed to reach s from the minimum path sum. (d = s - minimum path sum)
5. Since back-and-forth can be performed anywhere:
   - if d == 1, it is impossible to achieve s if 0s and 1s aren't adjacent. (1 = 0 + 1) [s won't be achievable]
   - if d > 1, any sum greater than or equal to 2 can be achieved by adjacent pairs. [s always achievable]

* Always rearrange the array in the order of 0s, 2s, and then 1s to ensure no adjacent pairs can sum to 1.
* output -1 if s is exactly the minimum path sum or if d > 1. (s = sum or s >= sum + 2)
```

## C. [Double Perspective](https://codeforces.com/contest/2130/problem/C)
### Tags: Graph, Intervals, Greedy Algorithm
> No solution yet

## D. [Stay or Mirror](https://codeforces.com/contest/2130/problem/D)
### Tags: Dynamic Programming, Inversions, Greedy Algorithm
> No solution yet

## E. Interactive RBS [(Easy)](https://codeforces.com/contest/2130/problem/E1) [(Medium)](https://codeforces.com/contest/2130/problem/E2) [(Hard)](https://codeforces.com/contest/2130/problem/E3)
### Tags: Interactive Problem, Binary Search, String
> No solution yet

## F. [Permutation Blackhole](https://codeforces.com/contest/2130/problem/F)
### Tags: Combinatorics, Dynamic Programming, Permutations
> No solution yet

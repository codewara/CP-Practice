# Codeforces Round 1040 (Div. 2) || 31 July 2025
## [Editorial](https://codeforces.com/blog/entry/145152) || [Complete Problemset](https://codeforces.com/contest/2130/problems)

## A. [Submission is All You Need](https://codeforces.com/contest/2130/problem/A)
### Tags: Greedy, Data Structures, Set
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

## B. [Pathless](https://codeforces.com/contest/2130/problem/A)
### Tags: Greedy, Case Analysis, Constructive Algorithms
> No solution yet

## C. [Double Perspective](https://codeforces.com/contest/2130/problem/C)
### Tags: Graph Theory, Intervals, Greedy
> No solution yet

## D. [Stay or Mirror](https://codeforces.com/contest/2130/problem/D)
### Tags: Dynamic Programming, Inversions, Greedy
> No solution yet

## E. Interactive RBS [(Easy)](https://codeforces.com/contest/2130/problem/E1) [(Medium)](https://codeforces.com/contest/2130/problem/E2) [(Hard)](https://codeforces.com/contest/2130/problem/E3)
### Tags: Interactive Problem, Binary Search, String
> No solution yet

## F. [Permutation Blackhole](https://codeforces.com/contest/2130/problem/F)
### Tags: Combinatorics, Dynamic Programming, Permutations
> No solution yet

# GEMASTIK XVII - Preliminary || 4 August 2024
## [Problemset](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan)

## A. [Makan Lumpia](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/A)
### Tags: Greedy, Simulation, Constraint Handling
> **[My Solution](A.cpp)**
```
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
```

## B. [Lumpia Rebung](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/B)
### Tags: Simulation, Array Manipulation, Data Structures
> **[My Solution](B.cpp)**
```
Brief Problem Statement:
Given a number of friends (N) and a length of lumpia (L). L divided by N is always an even number.
You have to divide the lumpia into N + 1 parts by performing N cuts.
On the i-th cut, select the Bᵢ-th piece from the left and cuts it into two equal parts.
You need to determine the final lengths of all lumpia pieces after all cuts have been performed.

Solution:
1. Start with the initial length of lumpia L.
2. For each cut, divide the selected piece by 2 and insert the new piece at the specified position.
3. After all cuts, print the lengths of all pieces in order.
```

## C. [Piknik](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/C)
### Tags: Graph, Greedy, Connected Components
> **[My Solution](C.cpp)**
```
Brief Problem Statement:
Given N people and M pairs of friendships. Each friendship can sit in a group together.
If there are people who are not friends with anyone, they can form a new group.
But if there is only one person left without friends, they can join the existing group.
You need to determine the minimum number of groups that can be formed.

Solution:
1. Create an adjacency list to represent friendships.
2. Use BFS to traverse through each connected component of the graph.
3. Count the number of connected components (groups).
4. If there are unvisited nodes after BFS, they can form a new group.
   But if only one unvisited node remains, it can join an existing group.
5. Print the total number of groups formed.
```

## D. [Biner](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/D)
### Tags: Combinatorics, Number Theory, Dynamic Programming
> No solution yet

## E. [Bilangan Fimoracci](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/E)
### Tags: Dynamic Programming, Combinatorics, Sequence
> No solution yet

## F. [Serangan Benteng](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/F)
### Tags: Dynamic Programming, Greedy, Game Theory
> **[My Solution](F.cpp)**
```
rief Problem Statement:
Given N waves of attack, each wave has Aᵢ soldiers. You are given three guns:
- Bullet gun: costs 1 coin, kills 1 soldier.
- Small bomb: costs P coins, kills a half of soldiers. (soldiers should be even)
- Large bomb: costs Q coins, kills 2/3 of soldiers. (soldiers should be divisible by 3)
You need to determine the minimum cost to kill all soldiers in each wave.

Solution:
1. Use dynamic programming to avoid redundant calculations.
2. For each wave, define:
   - the base case where A = 1, the cost is always 1 because the best option is to use the bullet gun.
   - memoization check to return the cost if soldiers count A is already computed.
3. For each A:
   - If A is even, calculate the cost using the small bomb.
   - If A is odd, calculate the cost using the small bomb and add 1 for the bullet gun.
   - If A is divisible by 3, calculate the cost using the large bomb.
   - If A % 3 == 1, calculate the cost using the large bomb and add 1 for the bullet gun.
   - If A % 3 == 2, calculate the cost using the large bomb and add 2 for the bullet gun.
4. Every time you calculate the cost for a specific A, store the smallest cost in a memoization map.
5. Finally, output the minimum cost for each wave.
```

## G. [Reseller Topi Gemastik](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/G)
### Tags: Greedy, Array Manipulation, Optimization
> **[My Solution](G.cpp)**
```
Brief Problem Statement:
Given N days of buying and selling hat prices.
If you buy a hat on day i, you can only sell it on day i + 2 or later.
You need to determine the maximum profit you can make.

Solution:
1. If N < 3, always output "tidak mungkin".
2. If N == 3, print the profit if day 3's selling price is greater than day 1's buying price, otherwise print "tidak mungkin".
3. For N > 3, calculate the maximum profit by iterating through the days and keeping track of the maximum selling price seen so far.
4. Output the maximum profit if it's positive, otherwise output "tidak mungkin".
```

## H. [Tumpukan Kartu](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/H)
### Tags: Data Structures, Simulation, Stack/Queue
> No solution yet

## I. [Diskon 50%, S&K Berlaku](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/I)
### Tags: Greedy, Optimization, Sorting
> **[My Solution](I.cpp)**
```
Brief Problem Statement:
Given N books and Q days. On the i-th day, you can buy at most Xᵢ books in each transaction.
If you buy exactly Xᵢ books, you will get a 50% discount on the cheapest book rounded down.
You can buy books in multiple transactions on the same day.
You need to determine the minimum amount of money you need to spend to buy all books for each day.

Solution:
1. Sort the array A in ascending order.
2. Precompute the total cost for buying books in groups of size 2 to N.
3. For each query, if Xᵢ is greater than N, output the total sum of prices;
   otherwise, output the precomputed cost for that group size.
The precomputation allows for efficient querying, as it avoids recalculating the total cost for each query.
```

## J. [Tupai Loncat](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/J)
### Tags: Greedy, Sorting, Optimization
> **[My Solution](J.cpp)**
```
Brief Problem Statement:
Given N poles with their heights in an array.
You need to determine the maximum and minimum highest difference between any two poles.

Solution:
1. Sort the array of heights.
2. maxdiff is the difference between the tallest and shortest pole => |a₀ - aₙ₋₁|.
3. mindiff is the maximum difference between any two adjacent poles in the sorted array.
4. A sorted array is guaranteed to have the minimum difference height,
   so, loop every adjacent elements in array to achieve the maximum value.
5. Print the minimum and maximum highest differences.
```

# GEMASTIK XVII - Preliminary || 4 August 2024
## [Problemset](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan)

## A. Antibakteri [(Easy)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/A1) [(Hard)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/A2)
### Tags: Game Theory, Grundy Values / Nim-Sum, Coordinate Compression
```
Brief Problem Statement:
Given N initial anti-bacterial microbes (ONLY 1 INITIAL IN A1 PROBLEM).
This is an impartial game played on a grid, with two players, Gema and Astik. Gema goes first.
The game state is defined by the microbe's type (T) and position (X, Y).
Microbes can move any number of steps (at least 1) in the following ways:
- Anti-D: up (decrease X) or left (decrease Y).
- Anti-K: up (decrease X) or diagonally up-left (decrease both X and Y by the same amount).
- Anti-A: left (decrease Y) or diagonally up-left (decrease both X and Y by the same amount).
A player loses if they cannot make a move. 
```
> **[My Solution (Easy)](A1.cpp)**
```
Solution: (N == 1)
1. For each microbe type, check what kind of position is an absolute losing position:
   - Anti-D: (X = 0, Y = 0) can't move up or left
   - Anti-K: (Y = 0) can't move up or diagonally
   - Anti-A: (X = 0) can't move left or diagonally
2. Specifically for Anti-D, if the initial position is X = Y, optimal play leads to (X = 1, Y = 1),
   forcing Gema to move up or left, which Astik can always move it to (X = 0, Y = 0) next turn.
3. If the initial position of the microbe matches the losing position for its type,
   Gema can't make a move in the first turn, and Astik wins.
```
> **[My Solution (Hard)](A2.cpp)**
```
Solution: (N >= 1)
1. For any N of microbe, the absolute losing position is when the movable microbes are only 2,
   and check for the absolute losing position for each type as follows:
   - Anti-D: (X = 0, Y = 1) or (X = 1, Y = 0)
   - Anti-K: (X = 1, Y = 0) or (X = 1, Y = 1)
   - Anti-A: (X = 0, Y = 1) or (X = 1, Y = 1)
2. If the last 2 microbes ended in any of those position, Gema will always loses the game,
   because Gema forced to move one microbe to unmovable state,
   and Astik will do so to the other one as well; making Gema can't move anything on his next turn.
3. Use Sprague-Grundy theorem to treat each microbe as subgames and XOR each Grundy Numbers
4. To calculate Grundy Number for each subgame, check every move of each microbe:
   - Anti-D moves (horizontally or vertically) affect both X and Y. Grundy = X ⊕ Y
   - Anti-K moves (vertically or diagonally) affect only Y. Grundy = Y
   - Anti-A moves (horizontally or diagonally) affect only X. Grundy = X
5. XOR each subgame Grundy Numbers to determine the game's absolute win-loss position.
   If the result is 0, Gema is in absolute losing game and Astik will win; otherwise, Gema will win.
```

## B. [Bebas + Beras = Bebras](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/B)
### Tags: Dynamic Programming, String Algorithms, Longest Common Subsequence (LCS)
> No solution yet

## C. [Cari Donat Semarang](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/C)
### Tags: Matrix, Dynamic Programming, Prefix/Suffix Sum
> No solution yet

## D. Distribusi Air [(Easy)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/D1) [(Hard)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/D2)
### Tags: Graph Theory, Union-Find/Disjoint Set Union (DSU), Offline Processing
> No solution yet

## E. [Enaknya Makan Lumpia Lagi](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/E)
### Tags: Greedy Algorithm, Scheduling / Resource Allocation, Data Structures
> No solution yet

## F. Formasi Pertahanan [(Easy)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/F1) [(Hard)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/F2)
### Tags: Matrix, Prefix Sum, Optimization
> No solution yet

## G. Gundu [(Easy)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/G1) [(Hard)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/G2)
### Tags: Computational Geometry, Simulation, Data Structures
> No solution yet

## H. [Hitung Biner](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/H)
### Tags: Dynamic Programming, Combinatorics, Binary Operation
> No solution yet

## I. Inselfsert [(Easy)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/I1) [(Hard)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/I2)
### Tags: Number Theory, Dynamic Programming with Modulo, Digit DP
> No solution yet

## J. Jamur Ajaib [(Easy)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/J1) [(Hard)](https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/J2)
### Tags: Greedy Algorithm, System of Linear Equations, Circular Array / Ring
> No solution yet

To compute the n-th Fibonacci number, we use the definition:

F(0) = 0

F(1) = 1

F(n) = F(n − 1) + F(n − 2)

A recursive solution directly follows the formula, but it’s very slow because it recalculates the same values many times. Instead, we use an iterative dynamic programming approach that builds the answer from the bottom up.

We start by storing the first two Fibonacci numbers:

prev2 = 0 → F(0)

prev1 = 1 → F(1)

For each number from 2 up to n:

Compute the current Fibonacci number:
curr = prev1 + prev2

Move forward in the sequence:

prev2 becomes the old prev1

prev1 becomes curr

By always keeping only the last two computed values, we avoid storing the whole sequence. This makes the solution fast and memory-efficient:

Time complexity: O(n) — one loop from 2 to n

Space complexity: O(1) — only three integers needed

At the end of the loop, curr contains F(n), which we return.

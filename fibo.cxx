class Solution {
public:
    int fib(int n) {
        // Base cases:
        // If n is 0, return 0 directly.
        if (n == 0) return 0;

        // If n is 1, return 1 directly.
        if (n == 1) return 1;

        // prev2 represents F(i - 2), initially F(0) = 0
        int prev2 = 0;

        // prev1 represents F(i - 1), initially F(1) = 1
        int prev1 = 1;

        // curr will store F(i) as we compute it
        int curr = 0;

        // Compute Fibonacci numbers from 2 up to n
        for (int i = 2; i <= n; ++i) {

            // F(i) = F(i-1) + F(i-2)
            curr = prev1 + prev2;

            // Shift the previous values forward:
            // prev2 becomes the new F(i - 2)
            // prev1 becomes the new F(i - 1)
            prev2 = prev1;
            prev1 = curr;
        }

        // curr now holds F(n)
        return curr;
    }
};

#include <iostream>
#include <vector>

// f(n) = f(n-1) + f(n-2)
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        std::vector<int> stairsWey(n+1, 0);
        stairsWey[1] = 1;
        stairsWey[2] = 2;
        for (int i = 3; i <= n; i++) {
            stairsWey[i] = stairsWey[i - 1] + stairsWey[i - 2];
        }
        return stairsWey[n];
    }
};

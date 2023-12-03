#include <iostream>
#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
        long double result;
        return result = (x <= 0 ? (x == 0 ? 0.0 : (0.0/0.0)) : pow(x, 0.5));
    }
};
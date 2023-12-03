#include <iostream>
#include <cmath>

class Solution {
public:
    double myPow(double x, double n) {
        double result;
        if (x == 0 &&  n == 0) {
            result = 1;
        } else if (x < 0 && (fmod(fabs(n), 1) > 0)) {
            result = (0.0/0.0);
        } else {
            result = exp(n * log(fabs(x)));
            if ((fmod(n, 2) > 0) && (x < 0)) { result *= -1;}
            if ((x < 0) && (n < 0) && (fmod(fabs(n), 2) > 0)) {
                result *= -1;
            }
        }
        return result;
    }
};

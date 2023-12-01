#include <iostream>
#include <vector>

// class Solution {
// public:
//     std::vector<int> plusOne(std::vector<int>& digits) {
//         for (size_t i = digits.size() - 1; i >= 0; i--) {
//             if(digits[i] == 9) {
//                 digits[i] = 0;
//                 if(i == 0) {
//                     std::vector<int> result;
//                     result.push_back(1);
//                     for (auto &&i : digits)
//                         result.push_back(i);
//                     return result;
//                 }
//             } else {
//                 digits[i]++;
//                 return digits;
//             }
//         }
//         return digits;
//     }
// };

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        for (size_t i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] == 9) {
                digits[i] = 0;
                if(i == 0) {
                    digits[i] = 1;
                    digits.push_back(0);
                    return digits;
                }
            } else {
                digits[i]++;
                return digits;
            }
        }
        return digits;
    }
};
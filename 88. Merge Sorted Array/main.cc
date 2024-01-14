#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int size1 = m - 1;
        int size2 = n - 1;
        int size3 = m + n - 1;
        while (size1 >= 0 && size2 >= 0) {
            if(nums1[size1] > nums2[size2]) {
                nums1[size3] = nums1[size1];
                size1 --;
            } else {
                nums1[size3] = nums2[size2];
                size2 --;
            }
            size3 --;
        }
        while(size2 >= 0) {
            nums1[size3] = nums2[size2];
            size2 --;
            size3 --;
        }
    }
};

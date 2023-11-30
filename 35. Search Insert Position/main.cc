#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); i++) {
            if(target == nums[i] || nums[0] > target) return i;
            if((i+1) != nums.size() && nums[i] < target && nums[i+1] > target) return i+1;
        }
        return nums.size();
    }
};
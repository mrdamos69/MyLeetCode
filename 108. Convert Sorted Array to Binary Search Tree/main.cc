#include <iostream>
#include <vector>
#include <stack>
#include <cmath>

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        if(nums.empty())  {
            return nullptr;
        } else if (nums.size() > 1) {
            size_t rootMid = std::round(nums.size()/2);
            TreeNode* root = new TreeNode(nums[rootMid - 1]);
            nums.erase(nums.begin() + (rootMid - 1));
            for (size_t i = 0; i < nums.size(); i++) {
                // if(nums[i] <= root->val) {

                // } else {

                // }
            }
            

        } else {
            TreeNode* root = new TreeNode(nums[0]);
        }
    }
};
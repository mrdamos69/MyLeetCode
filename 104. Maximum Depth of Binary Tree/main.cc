#include <iostream>
#include <vector>
#include <stack>

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


    int maxDepth(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        } else {
            int count_left = maxDepth(root->left);
            int count_right = maxDepth(root->right);
            return count_left >= count_right ? count_left + 1 : count_right + 1;
            // return std::max(count_left, count_right) + 1;
        }
    }
};
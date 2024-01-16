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
 
// class Solution {
// public:
//     std::vector<int> inorderTraversal(TreeNode* root) {
//         std::vector<int> result;
//         lookingTree(root, result);
//         return result;
//     }

//     void lookingTree(TreeNode* root, std::vector<int> &result) {
//         if(root == nullptr) return;
//         lookingTree(root->left, result);
//         result.push_back(root->val);
//         lookingTree(root->right, result);
//     }
// };

class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        std::stack<TreeNode*> temp_stack;
        TreeNode* count = root;

        while(count != nullptr || !temp_stack.empty()) {
            while (count != nullptr) {
                temp_stack.push(count);
                count = count->left;
            }
            count = temp_stack.top();
            temp_stack.pop();
            result.push_back(count->val);
            count = count->right;
        }
        return result;
    }
};
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if ((p && !q) || (!p && q)) return false;
        TreeNode* count_p = p;
        TreeNode* count_q = q;
        std::pair<TreeNode*, TreeNode*> back;
        
        while (count_p && count_q) {
            while (count_p && count_q) {
                back.first = count_p;
                back.second = count_q;
                if(count_p->val == count_q->val) {
                    std::cout << count_p->val << " " << count_q->val << std::endl;
                    count_p = count_p->left;
                    count_q = count_q->left;
                } else {
                    return false;
                }
            }

            if ((!count_p && count_q) || (count_p && !count_q)) {
                return false;
            }

            count_p = back.first;
            count_q = back.second;
            count_p = count_p->right;
            count_q = count_q->right;

            if(count_p && count_q && (count_p->val == count_q->val)) {
                continue;
                std::cout << count_p->val << " " << count_q->val << std::endl;
            } else if (count_p && count_q) {
                return false;
            }

            if ((!count_p && count_q) || (count_p && !count_q)) {
                return false;
            }
        }
        return true;
    }
};
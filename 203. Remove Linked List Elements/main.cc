#include <iostream>
#include <vector>

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    void delList(ListNode *node);

 };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head != nullptr) {
            ListNode* back = nullptr;
            while(head != nullptr && head->val == val) head = head->next;
            ListNode* temp = head;
            while(temp != nullptr) {
                if(temp->val == val) {
                    // ListNode* del = temp;
                    if(back != nullptr) {
                        back->next = temp->next;
                    } else {
                        head = temp->next;
                    }
                    // del = nullptr;
                }
                back = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};

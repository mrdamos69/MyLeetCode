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
    ListNode* reverseList(ListNode* head) {
        ListNode* result = nullptr;
        ListNode* temp = head;
        if(head != nullptr) {
            while(temp != nullptr) {
                push_front(result, temp->val);
                temp = temp->next;
            }
        }
        return result;
    }

    void push_front(ListNode* head, int val) {
        if(head == nullptr) {
            head = new ListNode(val);
        } else {
            ListNode* add_item = new ListNode(val);
            ListNode* temp = head;
            add_item->next = temp;
            head = add_item;
        }
    }
};
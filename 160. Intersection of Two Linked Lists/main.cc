#include <iostream>
#include <vector>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
     void delList(ListNode *node);
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
            ListNode* temp = headA;
            ListNode* temp2 = headB;

            while(temp != temp2) {
                temp = temp == NULL ? headB : temp->next;
                temp2 = temp2 == NULL ? headA : temp2->next;
            }
            return temp;
    }
};
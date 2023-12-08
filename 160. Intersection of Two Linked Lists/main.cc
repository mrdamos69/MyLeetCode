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
        if(headA != NULL || headB != NULL) {
            if(headA == headB) return headA;
            ListNode* temp = headA;
            while (temp->next != NULL) {
                ListNode* temp2 = headB;
                while(temp2->next != NULL) {
                    if(temp2 == temp->next) return temp2;
                    if(temp2->next == temp) return temp;
                    temp2 = temp2->next;
                }
                temp = temp->next;
            }
        } 
        return NULL;
    }
};

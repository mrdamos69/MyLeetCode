#include <iostream>
#include <vector>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head != NULL) {
            ListNode* temp = head;
            while (temp->next != NULL) {
                ListNode* temp2 = head;
                while (temp2->next != NULL) {
                    if(temp2 == temp) return true;
                    temp2 = temp2->next;
                }
                temp = temp->next;
            }
        } 
        return false;
    }
};
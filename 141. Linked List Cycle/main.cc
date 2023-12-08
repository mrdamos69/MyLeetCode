#include <iostream>
#include <vector>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head != NULL) {
//             ListNode* temp = head;
//             size_t count = 0;
//             while (temp->next != NULL) {
//                 ListNode* temp2 = head;
//                 for (size_t i = 0; i <= count; i++) {
//                     if(temp2 == temp->next) return true;
//                     temp2 = temp2->next;
//                 }
//                 temp = temp->next;
//                 count++;
//             }
//         } 
//         return false;
//     }
// };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp = head;
        ListNode *temp2 = head;
        while (temp != NULL && temp->next != NULL) {
            temp = temp->next->next;
            temp2 = temp2->next;
            if(temp == temp2) return true;

        }
        return false;
    }
};
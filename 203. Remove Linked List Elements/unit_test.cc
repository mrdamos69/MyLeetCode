#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_203, test_1) {
    Solution test;
    ListNode* nodeA = new ListNode(1);
    std::vector<int> vec {1, 2, 6, 3, 4, 5, 6};
    ListNode* temp = nodeA;
    for(size_t i = 1; i < vec.size(); i++) {
      temp->next = new ListNode(vec[i]);
      temp = temp->next;
    }
    ListNode* nodeB = new ListNode(1);
    std::vector<int> vec2 {1, 2, 3, 4, 5};
    ListNode* temp2 = nodeB;
    for(size_t i = 1; i < vec.size(); i++) {
      temp2->next = new ListNode(vec2[i]);
      temp2 = temp2->next;
    }

    ListNode * tempA = test.removeElements(nodeA, 6);
    ListNode * tempB = nodeB;

    while (tempA->next != nullptr || tempB->next != nullptr) {
      std::cout << tempA->val << " = " << tempB->val << std::endl;
      ASSERT_EQ(tempA->val, tempB->val);
      tempA = tempA->next;
      tempB = tempB->next;
    }
    // nodeA->delList(nodeA);
    // nodeB->delList(nodeB);
}

// TEST(Test_203, test_2) {
//     Solution test;
//     ListNode* nodeA = new ListNode(7);
//     std::vector<int> vec {7, 7, 7, 7};
//     ListNode* temp = nodeA;
//     for(size_t i = 1; i < vec.size(); i++) {
//       temp->next = new ListNode(vec[i]);
//       temp = temp->next;
//     }

//     ASSERT_EQ(test.removeElements(nodeA, 7), nullptr);

//     nodeA->delList(nodeA);
//     // nodeB->delList(nodeB);
// }


void ListNode::delList(ListNode *node) {
  if(node != NULL) {
    ListNode *delNode = NULL;
    while (node->next != NULL) {
      delNode = node;
      node = node->next;
      delete delNode;
    }
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_160, test_1) {
    Solution test;
    ListNode* nodeA = new ListNode(1);
    std::vector<int> vec {1, 2, 3};
    ListNode* temp = nodeA;
    for(size_t i = 1; i < vec.size(); i++) {
      temp->next = new ListNode(vec[i]);
      temp = temp->next;
    }
    ListNode* nodeB = new ListNode(1);
    std::vector<int> vec2 {1, 2, 3};
    ListNode* temp2 = nodeA;
    for(size_t i = 1; i < vec.size(); i++) {
      temp2->next = new ListNode(vec2[i]);
      temp2 = temp2->next;
    }
    ASSERT_TRUE(test.getIntersectionNode(nodeA, nodeB) == NULL);
    nodeA->delList(nodeA);
    nodeB->delList(nodeB);
}

TEST(Test_160, test_2) {
    Solution test;
    ListNode* nodeA = new ListNode(1);
    std::vector<int> vec {1, 2, 3};
    ListNode* temp = nodeA;
    for(size_t i = 1; i < vec.size(); i++) {
      temp->next = new ListNode(vec[i]);
      temp = temp->next;
    }
    ListNode* nodeB = new ListNode(1);
    std::vector<int> vec2 {1, 2, 3};
    ListNode* temp2 = nodeA;
    for(size_t i = 1; i < vec.size(); i++) {
      temp2->next = new ListNode(vec2[i]);
      temp2 = temp2->next;
    }
    nodeA = nodeB;
    ASSERT_TRUE(test.getIntersectionNode(nodeA, nodeB) == nodeA);
    nodeA->delList(nodeA);
    nodeB->delList(nodeB);
}

// TEST(Test_160, test_3) {
//     Solution test;
//     ListNode* nodeA = new ListNode(1);
//     std::vector<int> vec {1, 2, 3, 4};
//     ListNode* temp = nodeA;
//     for(size_t i = 1; i < vec.size(); i++) {
//       temp->next = new ListNode(vec[i]);
//       temp = temp->next;
//     }
//     ListNode* nodeB = new ListNode(1);
//     std::vector<int> vec2 {1, 2, 3, 4};
//     ListNode* temp2 = nodeA;
//     for(size_t i = 1; i < vec.size(); i++) {
//       temp2->next = new ListNode(vec2[i]);
//       temp2 = temp2->next;
//     }
//     nodeA->next = nodeB->next->next;
//     ASSERT_TRUE(test.getIntersectionNode(nodeA, nodeB) == nodeA->next);
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

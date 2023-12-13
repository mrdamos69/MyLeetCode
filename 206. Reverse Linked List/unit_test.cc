#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_206, test_1) {
    Solution test;
    ListNode* nodeA = new ListNode(1);
    std::vector<int> vec {1, 2, 6, 3, 4, 5};
    ListNode* temp = nodeA;
    for(size_t i = 1; i < vec.size(); i++) {
      temp->next = new ListNode(vec[i]);
      temp = temp->next;
    }

    ListNode* tempA;
    tempA = test.reverseList(nodeA);

    while (tempA != nullptr) {
      std::cout << tempA->val << std::endl;
      tempA = tempA->next;
    }

}


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

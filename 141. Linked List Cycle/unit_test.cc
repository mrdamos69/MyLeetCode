#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_141, test_1) {
    Solution test;
    ListNode* node = new ListNode(1);
    node->next = new ListNode(2);
    node->next->next = node;
    ASSERT_EQ(test.hasCycle(node), true);
    delete node->next;
    delete node;
}

TEST(Test_141, test_2) {
    Solution test;
    ListNode* node = new ListNode(1);
    node->next = new ListNode(2);
    ASSERT_EQ(test.hasCycle(node), false);
    delete node->next;
    delete node;
}

TEST(Test_141, test_3) {
    Solution test;
    ListNode* node = new ListNode(-21);
    std::vector<int> vec {-21,10,17,8,4,26,5,35,33,-7,-16,27,-12,6,29,-12,5,9,20,14,14,2,13,-24,21,23,-21,5};
    ListNode* temp = node;

    for(size_t i = 1; i < vec.size(); i++) {
      temp->next = new ListNode(vec[i]);
      temp = temp->next;
    }
    ASSERT_EQ(test.hasCycle(node), false);
}

TEST(Test_141, test_4) {
    Solution test;
    ListNode* node = new ListNode(-21);
    std::vector<int> vec {1, 2, 3};
    ListNode* temp = node;

    for(size_t i = 1; i < vec.size(); i++) {
      temp->next = new ListNode(vec[i]);
      temp = temp->next;
    }
    ASSERT_EQ(test.hasCycle(node), false);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

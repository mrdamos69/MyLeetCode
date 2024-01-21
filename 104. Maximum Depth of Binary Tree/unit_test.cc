#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_104, test_1) {
  Solution test;
  TreeNode *root_1 = new TreeNode(3);
  root_1->left = new TreeNode(9);
  root_1->right = new TreeNode(20);
  root_1->right->right = new TreeNode(7);
  root_1->right->left = new TreeNode(15);
  ASSERT_EQ(test.maxDepth(root_1), 3);
}

TEST(Test_104, test_2) {
  Solution test;
  TreeNode *root_1 = nullptr;
  ASSERT_EQ(test.maxDepth(root_1), 0);
}

TEST(Test_104, test_3) {
  Solution test;
  TreeNode *root_1 = new TreeNode(3);
  ASSERT_EQ(test.maxDepth(root_1), 1);
}

TEST(Test_104, test_4) {
  Solution test;
  TreeNode *root_1 = new TreeNode(3);
  ASSERT_EQ(test.maxDepth(root_1), 1);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


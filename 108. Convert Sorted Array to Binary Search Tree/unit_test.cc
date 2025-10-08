#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_108, test_1) {
  Solution test;
  // TreeNode *root_1 = new TreeNode(3);
  // root_1->left = new TreeNode(9);
  // root_1->right = new TreeNode(20);
  // root_1->right->right = new TreeNode(7);
  // root_1->right->left = new TreeNode(15);
  // ASSERT_EQ(test.maxDepth(root_1), 3);
}


int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


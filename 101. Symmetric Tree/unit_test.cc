#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_101, test_1) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(2);
  root_1->left->left = new TreeNode(3);
  root_1->right->right = new TreeNode(3);
  root_1->left->right = new TreeNode(4);
  root_1->right->left = new TreeNode(4);
  ASSERT_EQ(test.isSymmetric(root_1), true);
}

TEST(Test_101, test_2) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(2);
  root_1->left->right = new TreeNode(3);
  root_1->right->right = new TreeNode(3);
  ASSERT_EQ(test.isSymmetric(root_1), false);
}

TEST(Test_101, test_3) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(2);
  root_1->left->left = new TreeNode(3);
  root_1->right->right = new TreeNode(3);
  ASSERT_EQ(test.isSymmetric(root_1), true);
}

TEST(Test_101, test_4) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  ASSERT_EQ(test.isSymmetric(root_1), true);
}

TEST(Test_101, test_5) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(3);
  ASSERT_EQ(test.isSymmetric(root_1), false);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_100, test_1) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(3);
  TreeNode *root_2 = new TreeNode(1);
  root_2->left = new TreeNode(2);
  root_2->right = new TreeNode(3);
  ASSERT_EQ(test.isSameTree(root_1, root_2), true);
}

TEST(Test_100, test_2) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(3);
  root_1->right = new TreeNode(2);
  TreeNode *root_2 = new TreeNode(1);
  root_2->left = new TreeNode(2);
  root_2->right = new TreeNode(3);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}

TEST(Test_100, test_3) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  TreeNode *root_2 = new TreeNode(1);
  root_2->right = new TreeNode(2);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}

TEST(Test_100, test_4) {
  Solution test;
  TreeNode *root_1 = nullptr;
  TreeNode *root_2 = new TreeNode(1);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}

TEST(Test_100, test_5) {
  Solution test;
  TreeNode *root_1 = new TreeNode(10);
  root_1->left = new TreeNode(5);
  root_1->right = new TreeNode(15);
  TreeNode *root_2 = new TreeNode(10);
  root_2->left = new TreeNode(5);
  root_2->left->right = new TreeNode(15);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}

TEST(Test_100, test_6) {
  Solution test;
  TreeNode *root_1 = new TreeNode(2);
  root_1->right = new TreeNode(4);
  root_1->left = new TreeNode(3);
  TreeNode *root_2 = new TreeNode(2);
  root_2->right = new TreeNode(4);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}

TEST(Test_100, test_7) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(3);
  TreeNode *root_2 = new TreeNode(1);
  root_2->left = new TreeNode(2);
  root_2->right = new TreeNode(3);
  root_2->right->left  = new TreeNode(4);
  root_2->right->right  = new TreeNode(5);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}


TEST(Test_100, test_8) {
  Solution test;
  TreeNode *root_1 = new TreeNode(1);
  root_1->left = new TreeNode(2);
  root_1->right = new TreeNode(3);
  TreeNode *root_2 = new TreeNode(1);
  root_2->left = new TreeNode(2);
  root_2->right = new TreeNode(9);
  ASSERT_EQ(test.isSameTree(root_1, root_2), false);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

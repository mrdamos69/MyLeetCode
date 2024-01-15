#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_94, test_1) {
  Solution test;
  TreeNode *root = new TreeNode(1);
  root->right = new TreeNode(2);
  root->right->left = new TreeNode(3);
  std::vector<int> result = test.inorderTraversal(root);
  std::vector<int> result_2 {1, 3, 2};
  for (size_t i = 0; i < result.size(); i++) {
    ASSERT_EQ(result[i], result_2[i]);
  }

}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

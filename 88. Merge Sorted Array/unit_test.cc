#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_88, test_1) {
  Solution test;
  std::vector<int> nums1 {1, 2, 3, 0, 0, 0};
  std::vector<int> nums2 {2, 5, 6};
  std::vector<int> result {1, 2, 2, 3, 5, 6};
  test.merge(nums1, 3, nums2, 3);
  
  for (size_t i = 0; i < result.size(); i++) {
    ASSERT_EQ(result[i], nums1[i]);
  }

}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

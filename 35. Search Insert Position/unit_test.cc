#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_35, test_1) {
    Solution test;
    std::vector<int> testVector {1,3,5,6};
    ASSERT_EQ(test.searchInsert(testVector, 5), 2);
}

TEST(Test_35, test_2) {
    Solution test;
    std::vector<int> testVector {1,3,5,6};
    ASSERT_EQ(test.searchInsert(testVector, 2), 1);
}

TEST(Test_35, test_3) {
    Solution test;
    std::vector<int> testVector {1,3,5,6};
    ASSERT_EQ(test.searchInsert(testVector, 7), 4);
}

TEST(Test_35, test_4) {
    Solution test;
    std::vector<int> testVector {1,3,5,6};
    ASSERT_EQ(test.searchInsert(testVector, 0), 0);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

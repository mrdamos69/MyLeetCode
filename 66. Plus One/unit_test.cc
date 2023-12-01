#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_66, test_1) {
    Solution test;
    std::vector<int> count {1,2,3};
    std::vector<int> result {1,2,4};
    ASSERT_EQ(test.plusOne(count), result);
}

TEST(Test_66, test_2) {
    Solution test;
    std::vector<int> count {4,3,2,1};
    std::vector<int> result {4,3,2,2};
    ASSERT_EQ(test.plusOne(count), result);
}

TEST(Test_66, test_3) {
    Solution test;
    std::vector<int> count {9};
    std::vector<int> result {1,0};
    ASSERT_EQ(test.plusOne(count), result);
}


TEST(Test_66, test_4) {
    Solution test;
    std::vector<int> count {9, 9, 9};
    std::vector<int> result {1, 0, 0, 0};
    ASSERT_EQ(test.plusOne(count), result);
}


int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

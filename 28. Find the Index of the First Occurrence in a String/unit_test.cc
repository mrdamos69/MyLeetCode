#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_28, test_1) {
    Solution test;
    ASSERT_EQ(test.strStr("sadbutsad", "sad"), 0);
}

TEST(Test_28, test_2) {
    Solution test;
    ASSERT_EQ(test.strStr("leetcode", "leeto"), -1);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

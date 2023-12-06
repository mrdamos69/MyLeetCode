#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_70, test_1) {
    Solution test;
    ASSERT_EQ(test.climbStairs(3), 3);
}

TEST(Test_70, test_2) {
    Solution test;
    ASSERT_EQ(test.climbStairs(5), 8);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

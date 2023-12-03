#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_69, test_1) {
    Solution test;
    ASSERT_EQ(test.mySqrt(4), 2);
}

TEST(Test_69, test_2) {
    Solution test;
    ASSERT_EQ(test.mySqrt(8), 2);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_50, test_1) {
    Solution test;
    ASSERT_EQ(test.myPow(2.00000, 10), 1024.00000);
}

TEST(Test_50, test_2) {
    Solution test;
    ASSERT_EQ(test.myPow(2.10000, 3), 9.26100);
}

TEST(Test_50, test_3) {
    Solution test;
    ASSERT_EQ(test.myPow(2.00000, -2), 0.25000);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

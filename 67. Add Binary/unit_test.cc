#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_67, test_1) {
    Solution test;
    ASSERT_EQ(test.addBinary("11", "1"), "100");
}

TEST(Test_67, test_2) {
    Solution test;
    ASSERT_EQ(test.addBinary("1010", "1011"), "10101");
}

TEST(Test_67, test_3) {
    Solution test;
    ASSERT_EQ(test.addBinary("1", "111"), "1000");
}

TEST(Test_67, test_4) {
    Solution test;
    ASSERT_EQ(test.addBinary("1111", "1111"), "11110");
}

TEST(Test_67, test_5) {
    Solution test;
    ASSERT_EQ(test.addBinary("0", "0"), "0");
}

TEST(Test_67, test_6) {
    Solution test;
    ASSERT_EQ(test.addBinary("100", "110010"), "110110");
}

TEST(Test_67, test_7) {
    Solution test;
    ASSERT_EQ(test.addBinary("101111", "10"), "110001");
}

TEST(Test_67, test_8) {
    Solution test;
    ASSERT_EQ(test.addBinary("101", "111"), "1100");
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

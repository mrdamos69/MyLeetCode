#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_58, test_1) {
    Solution test;
    ASSERT_EQ(test.lengthOfLastWord("Hello World"), 5);
}

TEST(Test_58, test_2) {
    Solution test;
    ASSERT_EQ(test.lengthOfLastWord("   fly me   to   the moon  "), 4);
}

TEST(Test_58, test_3) {
    Solution test;
    ASSERT_EQ(test.lengthOfLastWord("luffy is still joyboy"), 6);
}

TEST(Test_58, test_4) {
    Solution test;
    ASSERT_EQ(test.lengthOfLastWord("a"), 1);
}

TEST(Test_58, test_5) {
    Solution test;
    ASSERT_EQ(test.lengthOfLastWord("a "), 1);
}

TEST(Test_58, test_6) {
    Solution test;
    ASSERT_EQ(test.lengthOfLastWord("vsd "), 3);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

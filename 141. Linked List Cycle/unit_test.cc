#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_141, test_1) {
    Solution test;
    ListNode *testList = nullptr;
    ASSERT_EQ(test.hasCycle(testList), false);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

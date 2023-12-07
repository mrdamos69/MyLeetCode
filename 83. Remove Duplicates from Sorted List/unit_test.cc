#include <gtest/gtest.h>
#include "main.cc"

TEST(Test_83, test_1) {
    Solution test;
    ListNode *testList = nullptr;
    test.deleteDuplicates(testList);
    ASSERT_EQ(test.deleteDuplicates(testList), nullptr);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

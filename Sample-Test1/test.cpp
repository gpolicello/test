#include "pch.h"
#include "../test/say_bleh.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, sayBleh) {
    EXPECT_EQ("bleh", bleh());
}
#include "pch.h"
#include "../StaticLib1/say_bleh.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, sayBleh) {
    EXPECT_EQ("bleh", bleh());
}

TEST(TestCaseName, sayBleh2) {
    EXPECT_EQ("bleh2", bleh2());
}


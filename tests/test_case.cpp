//
// Created by yisen on 2022/12/31.
//
#include "gtest/gtest.h"

TEST(TestCaseGroup, equalCase) {
    ASSERT_EQ(1, 2 - 1);
}


TEST(TestCaseGroup, notEqualCase) {
    ASSERT_TRUE(1 != 2);
}
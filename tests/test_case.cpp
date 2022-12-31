//
// Created by yisen on 2022/12/31.
//
#include "gtest/gtest.h"


void func(int num) {
    if (num / 2 > 0) {
        func(num / 2);
    }
    printf("%d,", num);
}

TEST(TestCaseGroup, equalCase) {
    ASSERT_EQ(1, 2 - 1);
}


TEST(TestCaseGroup, notEqualCase) {
    ASSERT_TRUE(1 != 2);
}


TEST(TestCaseGroup, recursionCase) {
    func(10);
}



TEST(TestCaseGroup, arrayCase) {
    int a[] = {1, 2, 3, 4};
    printf("first: %d\n", *(a));
    printf("second: %d\n", *(a + 1));
}
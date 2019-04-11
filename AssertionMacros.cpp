#include <iostream>
#include <gtest/gtest.h>

TEST(All_Assert_Macros, subtest_1)
{
    ASSERT_TRUE(1 > 0);
    ASSERT_FALSE(1 == 2);

    ASSERT_EQ(4, 4);
    ASSERT_NE(2, 4);
    ASSERT_GT(4, 2);
    ASSERT_LT(2, 4);
    ASSERT_GE(5, 5);
    ASSERT_LE(6, 6);
}

TEST(All_Expect_Macros, subtest_2)
{
    EXPECT_TRUE( 1> 0);
    EXPECT_FALSE( 1 == 2);

    EXPECT_EQ(1, 1);
    EXPECT_NE(2, 3);
    EXPECT_GT(7, 1);
    EXPECT_LT(1, 7);
    EXPECT_GE(9 ,9);
    EXPECT_LE(6, 6);
}

TEST(All_StringValueComparisions, subtest_3)
{
    ASSERT_STREQ("C++", "C++");
    ASSERT_STRNE("C++", "C");

    EXPECT_STREQ("JavaScript", "JavaScript");
    EXPECT_STRNE("JavaScript", "Java");

    /* Case Insensitive */
    ASSERT_STRCASEEQ("C++", "c++");
    ASSERT_STRCASENE("c++", "c");

    EXPECT_STRCASEEQ("javascript", "JavaScript");
    EXPECT_STRCASENE("java", "javaScript");
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

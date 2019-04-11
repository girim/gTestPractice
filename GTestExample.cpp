#include <iostream>
#include <gtest/gtest.h>

TEST(TestCaseName, subtest)
{
    ASSERT_TRUE(1==1);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

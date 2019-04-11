#include <iostream>
#include <gtest/gtest.h>

TEST(TestCaseName, subtest_1)
{
    ASSERT_TRUE(1 == 2);  /* Fatal failure */
    std::cout << "Executiing after First Assert " << "\n";
    ASSERT_FALSE(1 == 2);
}

TEST(TestCase_1, subtest_2)
{
    EXPECT_EQ(2, 1);  /* Non-Fatal failure */
    std::cout << "Executiing after First Expect " << "\n";
    EXPECT_EQ(2, 2);  /* Non-Fatal failure */
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

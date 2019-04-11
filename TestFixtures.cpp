#include <iostream>
#include <gtest/gtest.h>

std::string getName(int number)
{
    switch (number)
    {
        case 1:
            return "C++";
        
        case 2:
            return "JavaScript";
    
        default:
            break;
    }
    return "";
}

class GenericTest : public ::testing::Test
{
    protected:
        void SetUp() override
        {
            std::cout <<  " ----[SetUp]---- " <<  "\n";
        }

        void TearDown() override
        {
            std::cout <<  " ----[TearDown]----" << "\n";
        }
};

TEST_F(GenericTest, ShouldReturnCpluspuls)
{
    std::string value = getName(1);
    std::string expected = "C++";
    ASSERT_EQ(value, expected);
};

TEST_F(GenericTest, ShouldReturnJS)
{
    std::string value = getName(2);
    std::string expected = "JavaScript";
    ASSERT_EQ(value, expected);
};

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calc.hpp"

TEST(SumFunction, Test_1)
{
    EXPECT_EQ(15, sum(10, 5));
}
TEST(SumNotFunction, Test_1)
{
    EXPECT_NE(5, sum(10, 5));
}
TEST(SubFunction, Test_1)
{
    EXPECT_EQ(5, sub(10, 5));
}

bool fun(int num)
{
    throw std::runtime_error("Divide by zero");
}

TEST(fun, Test_1)
{
    EXPECT_THROW(fun(5), std::runtime_error);
}

const char* func()
{
    return "hello world";
}

TEST(str, Test_1)
{
    std::string str = "hello world";
    EXPECT_STREQ(func(), str.c_str());
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
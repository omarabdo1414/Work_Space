#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "stack.h"
#include <array>

using namespace ::testing;

class StackTeasting : public ::testing::Test
{
public:
    Status expected_state = SUCCESSFULL;
    Stack stack;
};

TEST_F(StackTeasting, able_to_push_into_stack)
{
    ASSERT_EQ(stack.push(10), expected_state);
}

TEST_F(StackTeasting, Is_Empty_Test)
{ 
    EXPECT_EQ(stack.is_empty(), expected_state);
}

TEST_F(StackTeasting, able_to_push_mutitimes_into_stack)
{
    std::array<int, 5> data = {1, 2, 3, 4, 5};
    for(long unsigned int i = 0; i < data.size(); i++)
    {
        ASSERT_EQ(stack.push(data[i]), expected_state);
    }
}

TEST_F(StackTeasting, able_to_pop_from_stack)
{
    stack.push(10);
    ASSERT_EQ(stack.pop(), expected_state);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
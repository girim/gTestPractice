#include "Turtle.hpp"
#include <gmock/gmock.h>

class MockTurtle : public Turtle
{
    public:

        /* Numbers 0,1,2 suffix indicates the number of arguments that the function to be mocked takes */
        MOCK_METHOD0(PenUp, void());
        MOCK_METHOD0(PenDown, void());

        MOCK_METHOD1(Forward, void(int distance));
        MOCK_METHOD1(Turn, void(int degrees));

        MOCK_METHOD2(GoTo, void(int x, int y));

        MOCK_CONST_METHOD0(GetX, int());
        MOCK_CONST_METHOD0(GetY, int());
};
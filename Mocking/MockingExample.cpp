#include <iostream>
#include <gtest/gtest.h>
#include "MockTurtle.hpp"
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::InSequence;

class TurtleGame
{
    public:
        TurtleGame(Turtle& ttl) : ttl_(ttl){};
        ~TurtleGame(){};

        void startGame()
        {
            ttl_.PenUp();
            ttl_.PenDown();
            ttl_.Forward(30);
            ttl_.GetX();
            ttl_.GetX();
        }

    private:
        Turtle& ttl_;
};

TEST(TurtleGameTest, penUpTest)
{
    //InSequence dummy_;
    MockTurtle turtle{};

    EXPECT_CALL(turtle, PenDown())
                .Times(AtLeast(1));

    EXPECT_CALL(turtle, PenUp())
                .Times(AtLeast(1));
    
    EXPECT_CALL(turtle, Forward(30))
                .Times(AtLeast(1));

    EXPECT_CALL(turtle, GetX())
                .Times(AtLeast(1))
                .WillOnce(Return(200));

    TurtleGame tGame{turtle};
    tGame.startGame();
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}


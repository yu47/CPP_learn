
#ifndef __BASKETBALL__
#define __BASKETBALL__

#include "DecoratorGame.h"

class BasketBallGame : public DecoratorGame {
   public:
    BasketBallGame(Game *game) : DecoratorGame(game) {}

    void skill() override {
        std::cout << "basketball game" << std::endl;
        DecoratorGame::skill();
    }
};

#endif
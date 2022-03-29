
#ifndef __SOCKETBALL__
#define __SOCKETBALL__

#include "DecoratorGame.h"

class SocketBallGame : public DecoratorGame {
   public:
    SocketBallGame(Game *game) : DecoratorGame(game) {}

    void skill() override {
        std::cout << "socket game" << std::endl;
        DecoratorGame::skill();
    }
};

#endif
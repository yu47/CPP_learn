#ifndef __LOL_GAME__
#define __LOL_GAME__

#include "game.h"

class LolGame : public Game {
   public:
    void skill() override { std::cout << "lol game" << std::endl; }
};

#endif
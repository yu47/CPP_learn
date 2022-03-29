#ifndef __BASKETBALL__
#define __BASKETBALL__

#include "game.h"

class BasketBall : public Game {
    void Play() override { std::cout << "play basketball" << std::endl; }
};

#endif
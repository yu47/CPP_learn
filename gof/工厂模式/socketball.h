
#ifndef __SOCKETBALL__
#define __SOCKETBALL__

#include "game.h"

class SocketBall : public Game {
    void Play() override { std::cout << "play socketball" << std::endl; }
};

#endif
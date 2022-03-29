
#ifndef __SOCKETBALL_FACTORY__
#define __SOCKETBALL_FACTORY__

#include "game_factory.h"
#include "socketball.h"

class SocketBallFactory : public GameFactory {
   public:
    Game* CreateGame() override{
        return new SocketBall();
    };
};

#endif
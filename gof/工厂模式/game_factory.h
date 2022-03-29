
#ifndef __GAME_FACTORY__
#define __GAME_FACTORY__

#include "game.h"

class GameFactory {
    public:
    GameFactory() {}
    virtual ~GameFactory() {}

    virtual Game* CreateGame() = 0;
};

#endif
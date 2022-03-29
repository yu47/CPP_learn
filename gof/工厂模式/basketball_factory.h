#ifndef __BASKETBALL_FACTORY__
#define __BASKETBALL_FACTORY__

#include "game_factory.h"
#include "basketball.h"

class BasketBallFactory : public GameFactory {
   public:
    Game* CreateGame() override{
        return new BasketBall();
    };
};

#endif
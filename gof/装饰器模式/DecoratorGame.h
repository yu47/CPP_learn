#ifndef __DECORATOR_GAME__
#define __DECORATOR_GAME__


#include "game.h"

class DecoratorGame : public Game {
   protected:
    Game *game_;

   public:
    DecoratorGame(Game *game) { game_ = game; }

    void skill() override { game_->skill(); }

    virtual ~DecoratorGame() {}
};

#endif
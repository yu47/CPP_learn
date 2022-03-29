#ifndef __CAR_GAME__
#define __CAR_GAME__

#include "game.h"

class CarGame : public Game {
    public:
        void skill() override {
            std::cout << "car game skill" <<std::endl;
        }
};

#endif
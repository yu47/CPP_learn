#ifndef __GAME__
#define __GAME__

#include <iostream>

class Game {
    public:
        Game() {}
        
        virtual ~Game() {}

        virtual void skill() {
            std:: cout <<"game skill" << std::endl;
        }
};

#endif
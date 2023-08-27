
#ifndef __GAME__
#define __GAME__
#include <iostream>

class Game {
  public:
    Game() {}
    virtual ~Game() {}

    virtual void Play() {
      std::cout << "play game" << std::endl;
    }

};

#endif
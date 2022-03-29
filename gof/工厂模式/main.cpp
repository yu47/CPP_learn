
#include "basketball_factory.h"
#include "socketball_factory.h"

int main() {
    GameFactory* factory = new BasketBallFactory();
    Game* game = factory->CreateGame();
    game->Play();

    delete factory;
    delete game;

    GameFactory* factory2 = new SocketBallFactory();
    Game* game2 = factory2->CreateGame();
    game2->Play();

    delete factory2;
    delete game2;

    return 0;
}
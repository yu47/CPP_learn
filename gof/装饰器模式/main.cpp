
#include "Lolgame.h"
#include "CarGame.h"
#include "DecoratorGame.h"
#include "SocketBallGame.h"
#include "BasketBallGame.h"

int main() {
    Game *lol = new LolGame();
    Game *car = new CarGame();
    // 一个人既会打篮球又会打LOL可以如下使用
    Game* basketball_lol = new BasketBallGame(lol);
    basketball_lol->skill();
    std::cout << std::endl;
    // 一个人既会打篮球又会玩卡丁车可以如下使用
    Game* basketball_car = new BasketBallGame(car);
    basketball_car->skill();
    std::cout << std::endl;
    // 一个人既会打篮球又会玩卡丁车又会踢足球可以如下使用
    Game* g = new SocketBallGame(basketball_lol);
    g->skill();

    delete lol;
    delete basketball_car;
    delete basketball_lol;
    delete g;

    return 0;
}
// // 输出
// basketball game
// lol game

// basketball game
// car game

// socket game
// basketball game
// lol game
#include "Add.h"
#include "Sub.h"
#include "Calculation.h"

int main() {
    Calculation *cal = new Add();
    cal->operation();
    delete cal;

    Calculation *cal2 = new Sub(); // 这里将来都可以用工厂模式改掉，不会违反开放封闭原则
    cal2->operation();
    delete cal2;

    return 0;
}
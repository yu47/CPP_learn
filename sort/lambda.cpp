#include <iostream>
class Foo
{
public:
    Foo(int d = 9) : dv(d){}
    bool operator()(int x){return x == dv;}
private:
    int dv;
};

int main(int argc, char const *argv[])
{
    /* code */
    Foo f(6);
    bool test = f(9);
    std::cout << test ;
    return 0;
}

#include "iostream"
using namespace std;
void test(int &a)
{
    cout << a <<endl;
    if(a < 1)
    {
        return;
    }
    a = a-1 ;
    test(a);
}
int main(int argc, char const *argv[])
{
    int a= 6;
    test(a);
    cout << a;
    return 0;
}

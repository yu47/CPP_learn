#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    const int x = 1;
    int& use_value = const_cast<int&>(x);
    int* use_point = const_cast<int*>(&x);
    use_value = 2;
    *use_point = 3;
    cout << &x << " " <<  use_point << endl;
    cout << x << " " << *use_point << endl;


    return 0;
}
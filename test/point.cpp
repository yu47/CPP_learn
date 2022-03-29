#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    
    
    int a[5] = {1,3,5,2,1};
    int* p = a ;


    int* p2 = &a[5];


    cout << p << "  "<< p2-p ;


    return 0;
}

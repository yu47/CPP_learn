#include <iostream>
using namespace std;
int add(int a, int b) {
        
    while(b!=0)
        {
            int sum=a^b;
            
            int carry=(unsigned)(a&b)<<1;
            cout <<"a&b:"<< (a&b) << endl;
            cout <<"b:"<< (b) <<endl;
            a=sum;b=carry;
        }
    return a;
}
int main(int argc, char const *argv[])
{
    int sum = add(1,3);
    cout << sum;
    return 0;
}

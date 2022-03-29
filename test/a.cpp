#include <iostream>
using namespace std;

void hanoi(int N ,char source , char relay ,char destination)
{
    if(N == 1)
        cout << source << "-->" << destination << endl ;
    else
    {
        hanoi(N-1 , source , destination , relay) ;
        cout << source << "-->" << destination << endl ;
        hanoi(N-1 , relay , source , destination) ;
    }
}

int main()
{
    cout << "移动盘子：" << endl ;
    hanoi(3, 'A' , 'B' , 'C') ;

    return 0;
}
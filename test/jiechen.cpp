#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int s=1;
    int n = 4;
    for(int i= 1;i<n+1;i++)
    {
        s = i*s;
    }
    cout << s;
    
    return 0;
}

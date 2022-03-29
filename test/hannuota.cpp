#include "iostream"
using namespace std;
#include "string"
void hannuo(int n,string A,string B,string C)
{
    
    if(n==1)
    {
        cout<<A<<"to"<<C<<endl;
    }
    else
    {
        
        hannuo(n-1,A,C,B);
        cout<<A<<"to"<<C<<endl;
        hannuo(n-1,B,A,C);
        
    }

}

int main(int argc, char const *argv[])
{
    hannuo(3,"A","B","C");
    /* code */
    return 0; 
}

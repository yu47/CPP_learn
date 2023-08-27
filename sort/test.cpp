#include <iostream>
#include "string.h"
using namespace std;
int main(int argc, char const *argv[])
{
// struct SA { 
// char c; 
// short s; 
// int i; 
// }; 

// struct SB 
// { 
// int i;  
// short s; 
// char c; 
// }; 
// struct SC 
// { 
// short s; 
// int i; 
// char c; 
// }; 

// char str[] = "hello";
// char *p1 = str;
// int n = 10;
// void *p2 = malloc(100);
// cout << sizeof(n) << endl;
// cout << sizeof(p2) ;

char str[20] = "a1bc3d4";
int x = strlen(str);
int y = sizeof(str);
printf("x=%d,y=%d",x,y);


    return 0;
}

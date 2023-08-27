#include "stdio.h"
int main(int argc, char const *argv[])
{
    char *s = "How old are you";
    char *res = (char *)malloc(sizeof(char)*(strlen(s)+2));
    char *stack = (char *)malloc(sizeof(char)*(strlen(s)+2));
    int i,t=0,c=0,f=0;
    for( i=14; i >=0; i--){
        if(s[i] != " ")
        {
            stack[t++] = s[i];
            f=1;
        }
        if(s[i] == " "){
            
            while(t > 0)
                res[c++] = stack[--t];
            if(f==1)
                res[c++] = " ";
            f = 0;

        }
    }

    printf("%s\n",res);

    while(t > 0){
        res[c++] = stack[--t];
    }
    res[c] = "\0";
    printf("%s",res);
    if(' ' == " ")
        printf("11111111111");
    return 0;
}

#include "stdio.h"
int main(int argc, char const *argv[])
{
    char *str[3] = {"ssra","ssb","c"};
char *p = str[0];
int i=0;
while(i++ < 3){
    printf("%s  ",p++);
}

    return 0;
}

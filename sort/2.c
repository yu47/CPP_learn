
int main(int argc, char const *argv[])
{
    char* s = "How old are you";
    int len = strlen(s);
    if(len == 0)
        return s;
    char *res = (char *)malloc(sizeof(char) * (strlen(s) + 2));
    char *stack = (char *)malloc(sizeof(char) * (strlen(s) + 2));
    int i, t = 0, count = 0, flag = 0;
    for(i = len - 1;i >= 0;i--)
    {
                if(s[i] != ' ')
        {
            stack[t++] = s[i];
            f = 1;
        }
        if(s[i] == ' ')
        {
            while(t > 0)
                res[c++] = stack[--t];
            if(f == 1)
                res[c++] = ' ';
            f = 0;
        }
        if(s[i] != ' ')
        {
            stack[t++] = s[i];
            flag = 1;
        }
        if(s[i] == ' ')
        {
            while(t > 0)
                res[count++] = stack[--t];
            if(flag == 1)
                res[count++] = ' ';
            flag = 0;
        }
    }
    if(t == 0)
    {
        if(count > 0)
            count--;
    }
    while(t > 0){
        res[count++] = stack[--t];
    }
    res[count] = '\0';
    printf("%s",res);
    return 0;
}

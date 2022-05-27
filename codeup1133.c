#include <stdio.h>

int main()
{
    char str[1001];
    fgets(str,1000,stdin);
    
    printf("%s",str);

    return 0;
}
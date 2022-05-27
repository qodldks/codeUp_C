#include <stdio.h>

int main()
{
    char m,n;
    scanf("%c %c",&m,&n);
    for (int i = m; i <= n; i++)
    {
        printf("%c ",i);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = (a>b?b:a); i <= (a>b?a:b); i++)
    {
        printf("%d ",i);
    }
    return 0;
}
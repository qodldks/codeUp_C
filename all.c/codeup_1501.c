#include <stdio.h>

int main()
{
    int n,i,j,str[50][50];
    scanf("%d",&n);
    for ( i = 0; i < n; i++,puts(""))
    {
        for ( j = 1; j <= n; j++)
        {
            str[i][j-1]=i*n+j;
            printf("%d ",str[i][j-1]);
        }
    }
    return 0;
}
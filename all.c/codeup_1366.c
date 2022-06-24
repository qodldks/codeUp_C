#include <stdio.h>

int main()
{
    int i,j,n;
    int nemo[102][102]={};
    scanf("%d",&n);
    for ( i = 0; i <= n+1; i++)
        for ( j = 0; j <= n+1; j++)
            nemo[i][j]='/';
    for ( i = 1; i <= n; i++)
        for ( j = 1; j <= n; j++)
            nemo[i][j]=' ';
    for (i = 1; i <= n; i++)
    {
        nemo[1][i]='*';
        nemo[n][i]='*';
        nemo[i][1]='*';
        nemo[i][n]='*';
        nemo[n/2+1][i]='*';
        nemo[i][n/2+1]='*';
        nemo[i][i]='*';
        nemo[i][n-i+1]='*';
    }
    
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
            printf("%c",nemo[i][j]);
        printf("\n");
    }
    return 0;
}
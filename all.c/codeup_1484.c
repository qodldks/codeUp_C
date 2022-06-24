#include <stdio.h>

int main()
{
    int n,m,str[102][102]={0,},d[4]={1,0,-1,0};
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            str[i][j]=1;
        }
    }
}
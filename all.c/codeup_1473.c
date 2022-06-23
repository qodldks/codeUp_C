#include <stdio.h>

int main()
{
    int n, m, x, y, d , cnt = 2;
    int str[102][102] = {0,};
    scanf("%d %d", &n,&m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            str[i][j] = 1;
    x=1;
    y=n;
    d=1;
    while (1)
    {
        if (str[y][x+d] == 1)
            x+=d;
        else if (str[y-1][x] == 1)
        {
            y--;
            d*=-1;
        }
        else
            break;
        str[y][x]=cnt;
        cnt++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            printf("%d ", str[i][j]);
        printf("\n");
    }
    return 0;
}



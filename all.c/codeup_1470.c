#include <stdio.h>

int main()
{
    int n, m, x, y, d , cnt = 2;
    int str[102][102] = {0,};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            str[i][j] = 1;
    x=1;
    y=1;
    d=1;
    while (1)
    {
        if (str[y+d][x] == 1)
            y+=d;
        else if (str[y][x+1] == 1)
        {
            x++;
            d*=-1;
        }
        else
            break;
        str[y][x]=cnt;
        cnt++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", str[i][j]);
        printf("\n");
    }
    return 0;
}




#include <stdio.h>

int main()
{
    int n, m, x, y, sx = 1, sy = 1, cnt = 2;
    int str[102][102] = {0,};
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            str[i][j] = 1;
    while (1)
    {
        if (str[sy + 1][sx] == 1)
        {
            sy++;
            y = sy;
            x = sx;
            while (str[y][x] == 1)
            {
                str[y][x] = cnt;
                y--;
                x++;
                cnt++;
            }
        }
        else if (str[sy][sx + 1] == 1)
        {
            sx++;
            y = sy;
            x = sx;
            while (str[y][x] == 1)
            {
                str[y][x] = cnt;
                y--;
                x++;
                cnt++;
            }
        }
        else
            break;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            printf("%d ", str[i][j]);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n, m, x, y, sx, sy, cnt;
    int str[102][102] = {
        0,
    };
    scanf("%d %d", &n, &m);
    sx = m;
    sy = n;
    cnt = 2;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            str[i][j] = 1;
    while (1)
    {

        if (str[sy - 1][sx] == 1)
            sy--;
        else if (str[sy][sx - 1] == 1)
            sx--;
        else
            break;
        y = sy;
        x = sx;
        while (str[y][x] == 1)
        {
            str[y][x] = cnt;
            y++;
            x--;
            cnt++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            printf("%d ", str[i][j]);
        printf("\n");
    }
    return 0;
}


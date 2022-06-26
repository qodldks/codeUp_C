#include <stdio.h>

int main()
{
    int i, j, n, nemo[102][102] = {};
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            nemo[i][j] = ' ';
    for (i = 1; i <= n; i++)
    {
        nemo[1][i] = '*';
        nemo[n][i] = '*';
        nemo[i][1] = '*';
        nemo[i][n] = '*';
        nemo[i][i] = '*';
        nemo[i][n - i + 1] = '*';
    }
    for (i = 1; i <= n; i++, puts(""))
        for (j = 1; j <= n; j++)
            printf("%c", nemo[i][j]);
    return 0;
}
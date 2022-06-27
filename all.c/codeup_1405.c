#include <stdio.h>
int main()
{
    int n, i, j, str[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &str[i]);
    for (i = 0; i < n; i++, puts(""))
        for (j = i; j < i + n; j++)
            printf("%d ", str[j % n]);
    return 0;
}
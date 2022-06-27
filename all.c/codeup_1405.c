#include <stdio.h>

int main()
{
    int n, str[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &str[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + n; j++)
        {
            printf("%d ", str[j % n]);
        }
        printf("\n");
    }

    return 0;
}
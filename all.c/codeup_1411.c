#include <stdio.h>

int main()
{
    int n, str[51];
    int a = 0;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
        scanf("%d", &str[i]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; i < n - 1; i++)
        {
            if (str[j] == i)
                break;
            else
                a = i;
        }
    }
    printf("%d", a);
    return 0;
}
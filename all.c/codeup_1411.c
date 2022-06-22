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
        for (int j = 0; j < n - 1; j++)
        {
            if (str[j] == i)
                break;
            else
            {
                printf("%d",i);
                return 0;
            }
                
        }
    }
    printf("\n%d", a);
    return 0;
}
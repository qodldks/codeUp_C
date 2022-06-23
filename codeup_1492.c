#include <stdio.h>

int main()
{
    int n,a[102],s[102];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for (int i = 0; i < n; i++)
    {
        s[i]=s[i-1]+a[i];
        printf("%d ",s[i]);
    }
    return 0;
}
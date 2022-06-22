#include <stdio.h>

int main()
{
    long long int a,r,n,num=0;//num=출력값,i=몇번째수
    scanf("%d%d%d",&a,&r,&n);
    num=a;
    for (int i = 1; i < n; i++)
    {
        num=num*r;
    }
    printf("%lld",num);

    return 0;
}
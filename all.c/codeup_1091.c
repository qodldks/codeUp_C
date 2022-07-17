#include <stdio.h>

int main()
{
    long long int a,m,d,n,num=0;//num=출력값,i=몇번째수
    scanf("%lld %lld %lld %lld",&a,&m,&d,&n);
    num=a;
    for (int i = 1; i < n; i++)
    {
        num=(num*m)+d;
        //num+=d;
    }
    printf("%lld",num);

    return 0;
}
#include <stdio.h>

int main()
{
    int i,k,result;
    scanf("%d", &k);
    int a[k];
    for(i=0; i<k; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<result||i==0)
        {
            result=a[i];
        }
    }
    printf("%d",result);

    return 0;
}
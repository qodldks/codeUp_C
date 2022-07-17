#include <stdio.h>

int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    for (; a <= b; a+=0.01)
    {
        printf("%.2lf ",a);
    }
    return 0;
}
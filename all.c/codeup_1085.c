#include <stdio.h>

int main()
{
    long long int h, b, c, s;
    scanf("%lld%lld%lld%lld", &h, &b, &c, &s);
    printf("%.1f MB", h * b * c * s / pow(2.0, 23.0));

    return 0;
}
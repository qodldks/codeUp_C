#include <stdio.h>

long long int f(void)
{
    return -2147483649;
}

int main()
{
    printf("%lld", f() );
    return 0;
}
#include <stdio.h>

int main()
{
   int n, d, cnt = 1;
   scanf("%d", &n);
   for (d = 1; n / d >= 10; d *= 10)
      cnt++;
   printf("%d",cnt);
   return 0;
}
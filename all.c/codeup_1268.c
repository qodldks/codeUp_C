#include <stdio.h>

int main()
{
   int i, n, cnt = 0, a;

   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
      scanf("%d", &a);
      if (a % 2 == 0)
         cnt++;
   }
   printf("%d", cnt);
   return 0;
}
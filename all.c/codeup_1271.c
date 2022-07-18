#include <stdio.h>

int main()
{
   int n, i, a, b = 0;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a);
      if (b <= a)
         b = a;
   }
   printf("%d",b);

   return 0;
}
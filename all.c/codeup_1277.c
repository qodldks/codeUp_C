#include <stdio.h>

int main()
{
   int n, i, k;
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      scanf("%d", &k);
      if(n==1)
      {
         printf("%d %d %d",k,k,k);
         break;
      }
      if (i == 1 || i == n / 2 + 1 || i == n)
         printf("%d ", k);
   }
   return 0;
}
#include <stdio.h>

int main()
{
   int n, i;
   scanf("%d", &n);
   if(n==2)
   {
      printf("prime");
      return 0;
   }
   for (i = 2; i < n; i++)
   {
      if (n % i == 0)
      {
         printf("not prime");
         break;
      }
      else if (i + 1 == n)
         printf("prime");
   }
   return 0;
}
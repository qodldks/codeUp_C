#include <stdio.h>

int main()
{
   int n, k, i, m = 1;
   scanf("%d %d", &n, &k);
   for (i = 0; i < k; i++)
      m *= n;
   printf("%d", m);

   return 0;
}
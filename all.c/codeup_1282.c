#include <stdio.h>

int main()
{
   int n, i = 0;
   scanf("%d", &n);
   while (i * i < n)
      i++;
   i--;
   printf("%d %d", n - i * i, i);
   return 0;
}
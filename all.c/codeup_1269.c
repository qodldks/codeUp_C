#include <stdio.h>

int main()
{
   int i, j, a, b, c, n, result;
   scanf("%d %d %d %d", &a, &b, &c, &n);
   result = a;
   for (i = 1; i < n; i++)
      result = result * b + c;
   printf("%d", result);
}
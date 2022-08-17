#include <stdio.h>

int n;

void f(int k)
{
   if (k < 1)
      return;
   f(k-1);
   printf("%d\n", k);
}

int main()
{
   scanf("%d", &n);
   f(n);
}
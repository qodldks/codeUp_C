#include <stdio.h>

int a, b;

void f(int m, int n)
{
   if (m > n)
      return;
   if(m%2)
      printf("%d\n", m);
   f(m + 1, n);
}

int main()
{
   scanf("%d%d", &a, &b);
   f(a, b);
}
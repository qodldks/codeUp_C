#include <stdio.h>

int a[3], i;

void swap(int m, int n)
{
   int e;
   if (a[m] > a[n])
   {
      e = a[m];
      a[m] = a[n];
      a[n] = e;
   }
}

int main()
{
   for (i = 0; i < 3; i++)
      scanf("%d", &a[i]);
   swap(0, 1);
   swap(1, 2);
   swap(0, 1);
   printf("%d %d %d", a[0], a[1], a[2]);
}
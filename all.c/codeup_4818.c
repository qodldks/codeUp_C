#include <stdio.h>

int main()
{
   int w, h, num, tx, ty;
   scanf("%d %d %d", &w, &h, &num);
   num = num % 15;
   ty = num / h;
   tx = num % w;

   printf("%d %d",tx,ty);
}
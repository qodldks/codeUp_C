#include <stdio.h>

int main()
{
   int a, b, c, i;
   float m;
   // a=투자액수,b=투자일수,c=일별 변동폭
   scanf("%d", &a);
   scanf("%d", &b);
   m = a;
   for (i = 0; i < b; i++)
   {
      scanf("%d", &c);
      m += m * c / 100;
   }
   printf("%.0f\n", m - a);
   if (m - a < 0.5 && m - a > -0.5)
      printf("same");
   else if (m - a >= 0.5)
      printf("good");
   else
      printf("bad");
   return 0;
}
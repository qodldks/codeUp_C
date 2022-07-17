#include <stdio.h>

int main()
{
   // A = 5m = 300s
   // B = 1m = 60s
   // C = 10s

   int t, a, b, c; // t = 시간, a,b,c = 각 버튼 누른 횟수

   scanf("%d", &t);
   a = t / 300;
   t = t % 300;

   b = t / 60;
   t = t % 60;

   c = t / 10;
   t = t % 10;

   if (t != 0)
   {
      printf("-1");
   }
   else
   {
      printf("%d %d %d", a, b, c);
   }
}
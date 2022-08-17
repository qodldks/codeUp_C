#include <stdio.h>

void star(int k)
{
   if (k<=0)
      return;//함수가 끝나면 함수가 호출된 곳으로 되돌아감!!!
   star(k-1);
   printf("*");
}

int main()
{
   int n;
   scanf("%d",&n);
   star(n);
   return 0;
}
#include <stdio.h>

//홀수 번호면 번호/2+1
//짝수 번호면 번호/2*10 즉, 번호*5

int main()
{
   int k,h;
   scanf("%d %d",&k,&h);
   printf("%d",(k%2==0?k*5:k/2+1)+(h%2==0?h*5:h/2+1));

   return 0;
}
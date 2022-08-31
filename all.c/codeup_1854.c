#include <stdio.h>
#include <string.h>

char str[30];
int n;

int f(int k){
   if(k==n) return 0;
   return f(k+1)+str[k]-'0';
}

int main()
{
   scanf("%s",str);
   n=strlen(str);
   printf("%d",f(0));

   return 0;
}
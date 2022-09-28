#include <stdio.h>

int n, memo[20] = {1,1,2};

int f(int k)
{
   if (!memo[k]) memo[k] = f(k - 1) + f(k - 2);
   return memo[k];
}

int main()
{
   scanf("%d", &n);
   printf("%d", f(n));
   return 0;
}

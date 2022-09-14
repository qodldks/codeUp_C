#include <stdio.h>

int n, memo[201] = {0, 1, 1};

int f(int k)
{
   if (!memo[k]) memo[k] = f(k - 1) + f(k - 2);
   return memo[k] % 10009;
}

int main()
{
   scanf("%d", &n);
   printf("%d", f(n));
   return 0;
}
#include <stdio.h>

int n, memo[100001] = {1, 1, 2};

int f(int k)
{
	if (!memo[k])
		memo[k] = f(k - 1) + f(k - 2) + f(k - 3);
	return memo[k] % 1000;
}

int main()
{
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
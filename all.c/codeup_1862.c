#include <stdio.h>

int memo[101] = {0, 1, 1}, n;

int f(int k)
{
	if (!memo[k])
		memo[k] = (f(k - 1) + f(k - 2)) % 1000000007;
	return memo[k];
}

int main()
{
	scanf("%d", &n);
	f(n);
	printf("%d", memo[n]);
	return 0;
}
#include <stdio.h>

int memo[51][51];

int f(int a, int b)
{
	if (a == 1 || b == 1)
		return memo[a][b] = memo[b][a] = 1;
	if (memo[a][b] != 0)
		return memo[a][b];
	else
		return memo[a][b] = memo[b][a] = (f(a - 1, b) + f(a, b - 1)) % 100000000;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", f(a, b));
	return 0;
}
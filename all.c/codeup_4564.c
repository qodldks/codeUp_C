#include <stdio.h>

int memo[301], stair[301];

int mymax(int a, int b)
{
	return a > b ? a : b;
}

int f(int a)
{
	if (a < 0)
		return 0;
	if (a == 1)
		return memo[1] = stair[1];
	if (a == 2)
		return memo[2] = stair[1] + stair[2];
	if (memo[a] != 0)
		return memo[a];
	else
		return memo[a] = mymax(f(a - 3) + stair[a - 1], f(a - 2)) + stair[a];
}

int main()
{
	int a, b, i;
	scanf("%d", &a);
	for (i = 1; i < a + 1; i++)
		scanf("%d", &stair[i]);
	printf("%d", f(a));
	return 0;
}
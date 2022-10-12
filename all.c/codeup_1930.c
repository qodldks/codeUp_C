#include <stdio.h>

int superSum(int k, int n)
{
	int i, sum = 0;
	if (!k)
		return n;
	for (i = 1; i <= n; i++)
		sum += superSum(k - 1, i);
	return sum;
}

int main()
{
	int k, n;
	while (scanf("%d %d", &k, &n) != EOF)
		printf("%d\n", superSum(k, n));
	return 0;
}
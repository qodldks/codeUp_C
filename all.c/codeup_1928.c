#include <stdio.h>

int f(int k)
{
	printf("%d\n", k);
	if (k == 1)
		return 0;
	if (k % 2)
		return f(k * 3 + 1);
	else
		return f(k / 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
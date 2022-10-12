#include <stdio.h>

void f(int a, int b)
{
	if (a == 1)
	{
		printf("*");
		return;
	}
	if (b == 1)
	{
		f(a - 1, a - 1);
		printf("\n");
	}
	else
		f(a, b - 1);
	printf("*");
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	f(n, n);
	return 0;
}
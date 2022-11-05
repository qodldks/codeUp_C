#include <stdio.h>

int a, b;

int f(int n, int r)
{
	if (n < r)
		return 0;
	else if (n == r)
		return 1;
	else if (r == 1)
		return n;
	return f(n - 1, r - 1) + f(n - 1, r);
}

int main()
{
	scanf("%d %d", &a, &b);
	printf("%d", f(a, b));
	return 0;
}
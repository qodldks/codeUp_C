#include <stdio.h>

int n;

int fac(int k)
{
	if (k == 1)
		return 1;
	return k * fac(k - 1);
}

int main()
{
	scanf("%d", &n);
	printf("%d", fac(n));
	return 0;
}
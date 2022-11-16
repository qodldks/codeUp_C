#include <stdio.h>

int a[50] = {0, 1, 1};

int f(int k)
{
	if (!a[k])
		a[k] = f(k - 1) + f(k - 2);
	return a[k];
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}

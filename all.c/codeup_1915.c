#include <stdio.h>

int n, a[21] = {0, 1, 1};

int f(int k)
{
	if (!a[k])
		a[k] = f(k - 1) + f(k - 2);
	return a[k];
}

int main()
{
	scanf("%d", &n);
	printf("%d", f(n));
}

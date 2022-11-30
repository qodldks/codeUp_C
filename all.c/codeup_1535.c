#include <stdio.h>

int n, d[110];

int f()
{
	int highest = 0;
	for (int i = 1; i < n; i++)
		if (d[i] > d[highest])
			highest = i;
	return highest + 1;
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &d[i]);

	printf("%d", f());
	return 0;
}
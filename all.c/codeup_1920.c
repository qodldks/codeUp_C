#include <stdio.h>

int f(int n)
{
	if (!n)
		return 0;
	f(n / 2);
	printf("%d", n % 2);
}

int main()
{
	int dec;
	scanf("%d", &dec);
	if (!dec)
		printf("0");
	else
		f(dec);
	return 0;
}
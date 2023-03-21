#include <stdio.h>

int main()
{
	int n, longest;
	scanf("%d", &n);
	// 가장 긴변은 나머지 두변의 합보다 작아야한다.
	// 세변의 길이의 합은 n이다.
	for (int i = (n - 1) / 2; i > (n - i) / 2 -1; i--)
	{ // i => 4 => 3
		for (int j = 1; j < (n - i) + 1 / 2; j++)
		{
			printf("%d %d %d\n", i, j, n - i - j);
		}
	}

	return 0;
}
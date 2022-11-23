// 메모이제이션
// #include <stdio.h>

// int a, b;
// int str[26][26];

// int f(int n, int r)
// {
// 	if (n < r)
// 		str[n][r] = 0;
// 	else if (n == r)
// 		str[n][r] = 1;
// 	else if (r == 1)
// 		str[n][r] = n;
// 	if (!str[n][r])
// 		str[n][r] = f(n - 1, r - 1) + f(n - 1, r);
// 	return str[n][r];
// }

// int main()
// {
// 	scanf("%d %d", &a, &b);
// 	printf("%d", f(a, b));
// 	return 0;
// }

// 다이나믹
#include <stdio.h>

int main()
{
	int n, r, i, j;
	int str[50][50] = {0};
	scanf("%d %d", &n, &r);
	for (i = 1; i < n+2; i++)
	{
		for (j = 0; j < n+2; j++)
		{
			if (i == j + 1 || i == j)
			{
				str[i][j] = 1;
				break;
			}
			str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
		}
	}
	printf("%d\n", str[n+1][r]);
	return 0;
}

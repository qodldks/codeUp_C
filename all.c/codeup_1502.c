#include <stdio.h>

int main()
{
	int n, col = 0, row = 0;
	int str[51][51];
	scanf("%d", &n);
	for (int i = 1; i <= n * n; i++)
	{
		str[col][row] = i;
		if ((col + 1) % n)
			col++;
		else
		{
			col = 0;
			row++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", str[i][j]);
		printf("\n");
	}

	return 0;
}
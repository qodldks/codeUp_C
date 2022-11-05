#include <stdio.h>

int arr[26][26];
int n, k;

void f(int col, int row)
{
	arr[col][row] = arr[col - 1][row - 1] + arr[col - 1][row];
	if (row == col)
	{
		if (col == n)
			return;
		f(col + 1, 1);
	}
	else
		f(col, row + 1);
}

int main()
{
	arr[0][0] = 1;
	scanf("%d %d", &n, &k);
	f(1, 1);
	printf("%d", arr[n][k]);

	return 0;
}
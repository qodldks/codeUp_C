#include <stdio.h>

int arr[26][26], t;

void f(int col, int row)
{
	arr[col][row] = arr[col - 1][row - 1] + arr[col - 1][row];
	printf("%d ", arr[col][row]);
	if (row == col)
	{
		if (col == t)
			return;
		printf("\n");
		f(col + 1, 1);
	}
	else
		f(col, row + 1);
}

int main()
{
	arr[0][0] = 1;
	scanf("%d", &t);
	f(1, 1);

	return 0;
}
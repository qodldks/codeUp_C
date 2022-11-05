#include <stdio.h>

int arr[30][30], t;

void f(int col, int row)
{
	printf("%d ", row + 1);
	if (row == col)
	{
		if (col == t - 1)
			return;
		printf("\n");
		f(col + 1, 0);
	}
	else
		f(col, row + 1);
}

int main()
{
	scanf("%d", &t);
	f(0, 0);

	return 0;
}
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	if (num >= 1 && num <= 9)
	{
		int sum;
		for (int i = 1; i <= 9; i++)
		{
			sum = i * num;
			for (int j = 1; j <= sum; j++)
				printf("*");
			printf("\n");
		}
	}

	return 0;
}

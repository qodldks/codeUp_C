#include <stdio.h>

int main()
{
	int num, min, max, temp;
	temp = 0;
	scanf("%d\n", &num);
	min = num;
	max = num;
	for (int i = 1; i <= 4; i++)
	{
		scanf("%d\n", &num);
		if (min >= num)
			min = num;
		if (max <= num)
			max = num;
	}
	printf("%d\n%d", max, min);
	return 0;
}
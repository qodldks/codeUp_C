#include <stdio.h>

int main()
{
	int num1, num2, num3, num4, state;
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	state = num1 + num2 + num3 + num4;

	if (state == 1)
		printf("도");
	else if (state == 2)
		printf("개");
	else if (state == 3)
		printf("걸");
	else if (state == 4)
		printf("윷");
	else
		printf("모");
	return 0;
}
#include <stdio.h>

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if (num2 % num1 == 0)
		printf("%d*%d=%d", num1, (num2 / num1), num2);
	else if (num1 % num2 == 0)
		printf("%d*%d=%d", num2, (num1 / num2), num1);
	else
		printf("none");
	return 0;
}

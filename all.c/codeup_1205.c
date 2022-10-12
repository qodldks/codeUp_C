#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2;
	float temp;
	scanf("%d %d", &num1, &num2);
	temp = num1 + num2;
	if (num1 - num2 > temp)
		temp = num1 - num2;
	if (num2 - num1 > temp)
		temp = num2 - num1;
	if (num1 * num2 > temp)
		temp = num1 * num2;
	if ((float)(num1 / num2) > temp)
		temp = (float)(num1 / num2);
	if ((float)(num2 / num1) > temp)
		temp = (float)(num2 / num1);
	if (pow(num1, num2) > temp)
		temp = pow(num1, num2);
	if (pow(num2, num1) > temp)
		temp = pow(num2, num1);
	printf("%.06f", temp);
	return 0;
}
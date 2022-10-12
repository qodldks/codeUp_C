#include <stdio.h>

int main()
{
	char ch;
	int num;
	int sum = 0;
	scanf("%d", &num);
	sum = num;
	for (int i = 0;; i++)
	{
		scanf("%c", &ch);
		// scanf("%d",&num);
		if (ch == '+')
		{
			scanf("%d", &num);
			sum += num;
		}
		else if (ch == '-')
		{
			scanf("%d", &num);
			sum -= num;
		}
		else if (ch == '/')
		{
			scanf("%d", &num);
			sum /= num;
		}
		else if (ch == '*')
		{
			scanf("%d", &num);
			sum *= num;
		}
		else if (ch == '=')
		{
			printf("%d", sum);
			break;
		}
	}
	return 0;
}
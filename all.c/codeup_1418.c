#include <stdio.h>

int main()
{
	char Arr[20];
	gets(Arr);
	for (int i = 0; Arr[i] != '\0'; i++)
		if (Arr[i] == 't')
			printf("%d ", i + 1);

	return 0;
}
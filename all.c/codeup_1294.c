#include <stdio.h>

int main()
{
	char txt;
	while (scanf("%c", &txt) != EOF)
	{
		if (txt >= 97 && txt <= 122)
		{
			if (txt + 3 < 123)
				printf("%c", txt + 3);
			else if (txt + 3 >= 123)
				printf("%c", txt - 23);
		}
		if (txt == ' ')
			printf(" ");
	}
	return 0;
}
#include <stdio.h>

int main()
{
	char txt;
	while (scanf("%c", &txt) != EOF)
	{
		if (txt >= 97 && txt <= 122)
		{
			if (txt - 3 < 97)
				printf("%c", txt + 23);
			else if (txt - 3 >= 97)
				printf("%c", txt - 3);
		}
		if (txt == ' ')
			printf(" ");
	}
	return 0;
}
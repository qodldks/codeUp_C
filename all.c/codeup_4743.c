#include <stdio.h>

int main()
{
	for (int n = 4, a, b, c, d, e, f, g, h; n--; puts(""))
	{
		scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
		if ((a == g || c == e) && (b == h || d == f))
			printf("c");
		else if (g < a || h < b || c < e || d < f)
			printf("d");
		else if (a == g || b == h || c == e || d == f)
			printf("b");
		else
			printf("a");
	}

	return 0;
}
#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);

	printf(a == 'A' ? "best!!!" : (a == 'B' ? "good!!" : (a == 'C' ? "run!" : (a == 'D' ? "slowly~" : "what?"))));

	return 0;
}

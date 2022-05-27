#include <stdio.h>

int main()
{
	char x, t='a';
	scanf("%c", &x);
    for ( t = 'a'; t < x+1; t++)
    {
        printf("%c ", t);
    }
    
	return 0;
}
#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	
    printf(a>2&&a<6?"spring":(a>5&&a<9?"summer":(a>8&&a<12?"fall":"winter")));
	
	return 0;
}

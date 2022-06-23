#include <stdio.h>

int main()
{
	char str[102];
	int solo=0,couple=0;
	scanf("%s",str);
	for (int i=0;str[i]!='\0';i++) {
	    if(str[i]=='C'||str[i]=='c')
	        solo++;
	    if((str[i]=='C'||str[i]=='c')&&(str[i+1]=='C'||str[i+1]=='c'))
	        couple++;
	}
	printf("%d\n%d",solo,couple);
	return 0;
}


#include <stdio.h>

long long int memo[10000001] = {0}; //메모
long long int max = 0;					//최대 길이
int locate = 0;							//최대 길이의 수

//최대 길이및 최대 길이 수 구하는 함수
long long int mymax(long long int a, long long int b, int c)
{
	if (a > b)
	{
		locate = c;
		return a;
	}
	else
		return b;
}

//우박수 구하는 재귀함수
long long int recur(long long int a)
{
	if (a == 1)
		return 1;
	if (a > 10000000)
	{
		if (a % 2 == 0)
			return recur(a / 2) + 1;
		else
			return recur(a * 3 + 1) + 1;
	}

	if (memo[a] != 0)
		return memo[a];

	else
	{
		if (a % 2 == 0)
			return memo[a] = recur(a / 2) + 1;
		else
			return memo[a] = recur(a * 3 + 1) + 1;
	}
}

int main()
{

	int a, b;
	scanf("%d %d", &a, &b);

	while (a < b + 1)
	{
		long long int temp = recur(a);
		max = mymax(temp, max, a);
		++a;
	}

	printf("%d %lld\n", locate, max);

	return 0;
}
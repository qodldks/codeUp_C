#include <stdio.h>

int main()
{
	int Arr[101] = {};
	int size, course;
	int s, e, u;
	scanf("%d %d", &size, &course);
	for (int i = 1; i <= course; i++)
	{
		scanf("%d %d %d", &s, &e, &u);
		Arr[s] = Arr[s] + u;
		Arr[e + 1] = Arr[e + 1] - u;
	}

	for (int i = 1; i <= size; i++)
		printf("%d ", Arr[i]);
	printf("\n");
	int sum = 0;
	for (int i = 1; i <= size; i++)
	{
		sum += Arr[i];
		printf("%d ", sum);
	}
	return 0;
}
#include <stdio.h>

typedef struct student
{
	char name[11];
	int score;
} student;

void swap(student list[], int a, int b) // a,b는 인덱스를 가리킴
{
	student temp;
	temp = list[a];
	list[a] = list[b];
	list[b] = temp;
}

int partition(student list[], int left, int right)
{
	int pivot, temp, low, high;
	low = left;
	high = right + 1;
	pivot = list[left].score;
	do
	{
		do
			low++;
		while (list[low].score > pivot && low <= right);
		do
			high--;
		while (list[high].score < pivot);
		if (low < high)
			swap(list, low, high);
	} while (low < high);
	swap(list, left, high);
	return high;
}

void quicksort(student list[], int left, int right)
{
	if (left < right)
	{
		int q = partition(list, left, right);
		quicksort(list, left, q - 1);
		quicksort(list, q + 1, right);
	}
}

int main()
{
	int n, m, i;
	student list[100];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s %d", &list[i].name, &list[i].score);
	quicksort(list, 0, n); // 점수기준 내림차순 퀵정렬
	for (i = 0; i < m; i++)
		printf("%s\n", list[i].name);
	return 0;
}
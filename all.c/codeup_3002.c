#include <stdio.h>

int n, k, A[1000001];

int solve(int s, int e)
{
	int m;
	while (e - s >= 0)
	{
		m = (s + e) / 2;
		if (A[m] == k)
			return m + 1;
		if (A[m] < k)
			s = m + 1;
		else
			e = m - 1;
	}
	return -1;
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", A + i);
	}
	scanf("%d", &k);
	printf("%d\n", solve(0, n - 1));

	return 0;
}
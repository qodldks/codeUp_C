// #include <stdio.h>

// int f(int k)
// {
// 	if (!k) return 1;
// 	return f(k - 1) + k;
// }

// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	printf("%d",f(n));
// 	return 0;
// }

#include <stdio.h>
// 0  1  2  3  4  5
// 1  2  4  7  11 16
int arr[10000000] = {1}, n, i;
int main()
{
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		arr[i] = (arr[i - 1] + i) % 137;
	printf("%d", arr[i - 1]);
	return 0;
}
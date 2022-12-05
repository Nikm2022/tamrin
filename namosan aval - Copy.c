#include <stdio.h>
#pragma warning(disable:4996)
int Prime(int x) {
	if (x == 1 || x == 0)
		return 0;
	if (x == 2)
		return 1;
	for (int i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int PrimeNum(int x) {
	int ctr = 0;
	int i = 1;
	while (ctr != x) {
		i++;
		if (Prime(i))
			ctr++;
	}
	return i;
}
int main()
{
	int n, x;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		if (i != n)
			printf("%d\n", PrimeNum(PrimeNum(x)));
		else
			printf("%d", PrimeNum(PrimeNum(x)));
	}
}
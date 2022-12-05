#include<stdio.h>
#pragma warning(disable:4996)
int Prime(int x) {
	if (x == 1 || x==0)
		return 0;
	if (x == 2 || x == 3)
		return 1;
	for (int i = 2; i <= x/2; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int VeryPrime(int x) {
	while (x > 0) {
		if (!Prime(x % 10))
			return 0;
		x /= 10;
	}
	return 1;
}
int main()
{
	int num, j = 0;
	int addad[1001];
	scanf("%d", &num);
	for (int i = 1; i < num; i++)
	{
		if (Prime(i) && VeryPrime(i)) {
			addad[j] = i;
			j++;
		}
	}
	for (int i = 0; i < j; i++)
	{
		if (i != j)
			printf("%d ", addad[i]);
		else
			printf("%d", addad[i]);
	}
}
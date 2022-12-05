#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)
int Ragham(int x) {
	int ctr = 0;
	while (x>0){
		x /= 10;
		ctr++;
	}
	return ctr;
}
int Palindrom(char number[9]) {
	int num = atoi(number);
	int temp = num;
	int b = 0;
	for (int i = Ragham(num) - 1; i >= 0; i--)
	{
		b += (num % 10) * (int)pow(10, i);
		num /= 10;
	}
	if (b == temp)
		return 1;
	else
		return 0;
}
int main()
{
	char number[9];
	int num, maxctr = 0, row, n, ctr, maxrow = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		maxctr = 0;
		maxrow = 0;
		scanf("%s", number);
		for (int j = 0; j < 8; j++)
		{
			row = 0;
			for (int k = j; k >= 0; k--)
			{
				if (number[j] == number[k])
					row++;
				else
					goto Jump;
			}
			Jump:
			ctr = 0;
			for (int k = 0; k < 8; k++)
			{
				if (number[j] == number[k])
					ctr++;
			}
			if (ctr > maxctr)
				maxctr = ctr;
			if (row > maxrow)
				maxrow = row;
		}
		if (maxctr >= 4 || maxrow >= 3 || Palindrom(number))
			printf("Ronde!\n");
		else
			printf("Rond Nist\n");
	}
}
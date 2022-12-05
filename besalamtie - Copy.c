#include<stdio.h>
int main()
{
	char colour[6];
	int R = 0, G = 0, Y = 0;
	scanf("%s", colour);
	for (int i = 0; i < 5; i++)
	{
		if (colour[i] == 'R')
			R++;
		if (colour[i] == 'G')
			G++;
		if (colour[i] == 'Y')
			Y++;
	}
	if (R > 2 || (R > 1 && Y > 1) || G == 0)
		printf("nakhor lite");
	else
		printf("rahat baash");
}
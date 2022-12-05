#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	char word[7];
	int ctr = 0;
	scanf("%s", &word);
	for (int i = 0; i < 6; i++)
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'o' || word[i] == 'u' || word[i] == 'i')
			ctr++;
	}
	printf("%d", (int)pow(2, ctr));
}

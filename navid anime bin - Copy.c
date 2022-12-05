#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)
int main()
{
	int n, ctr = 0;
	char name[1001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		ctr = 0;
		scanf("\n%[^\n]", name);
		do {
			ctr++;
		} while (name[ctr] != '\0');
		for (int j = 0; j < ctr; j++)
		{
			if (j == 0)
				name[j] = toupper(name[j]);
			else
				if ((int)name[j] == 32) {
					name[j + 1] = toupper(name[j + 1]);
					j++;
				}
				else
					name[j] = tolower(name[j]);
		}
		printf("%s\n", name);
	}
}
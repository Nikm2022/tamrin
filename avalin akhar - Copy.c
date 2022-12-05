#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char aval[51];
	char dovom[51];
	int n2 = 0;
	scanf("%s\n%s", aval, dovom);
	do {
		n2++;
	} while (dovom[n2] != '\0');
	if (aval[0] == dovom[n2-1])
		printf("YES");
	else
		printf("NO");
}
#include <stdio.h>
#pragma warning (disable:4996)
void PrintImage(int image[255][255],int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", image[i][j]);
		}
		printf("\n");
	}
}
void Convert2Negative(int image[255][255],int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			image[i][j] = 255 - image[i][j];
		}
	}
}
int main(void)
{
	int image[255][255];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &image[i][j]);
		}
	}
	Convert2Negative(image,n);
	PrintImage(image,n);
}
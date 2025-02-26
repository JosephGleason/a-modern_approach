/* Reverses a series of numbers */
#include <stdio.h>

int main(void)
{
	int a[10], i;

	printf("Enter 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("In reverse order:\n");
	for (i = 9; i >= 0; i--)
	{
		printf(" %d", a[i]);
	}
	printf(" \n");


	return (0);
}

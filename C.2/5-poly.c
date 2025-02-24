#include <stdio.h>

int main(void)
{
	double x, poli;

	printf("Enter a value of x: ");
	scanf("%lf", &x);

	double x2 = x * x;
	double x3 = x2 * x;
	double x4 = x3 * x;
	double x5 = x4 * x;

	poli = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;

	printf("The result of the polynomial is: %.2f\n", poli);

	return (0);
}

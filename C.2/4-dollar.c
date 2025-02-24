#include <stdio.h>

int main(void)
{
	double amount, total;

	printf("Enter an amount: ");
	scanf("%lf", &amount);

	total = amount + (amount * 0.05);

	printf("With tax added: $%.2f\n", total);

	return (0);
}

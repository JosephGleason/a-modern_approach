#include <stdio.h>

int main(void)
{
	float r = 10.0f;
	float volume;
	float PI =  3.14159;

	volume = (4.0f / 3.0f) * PI * (r * r * r);

	printf("The volume of a shpere with radius %.1f meteres is %.2f cubic meters\n", r, volume);

	return (0);
}

#include <stdio.h>

int main(void)
{
        float r, volume;
        float PI =  3.14159;
	
	printf("Enter radius of sphere: ");
	scanf("%f", &r);

        volume = (4.0f / 3.0f) * PI * (r * r * r);
	
        printf("The volume of a shpere with radius %.2f meteres is %.2f cubic meters\n", r, volume);

        return (0);
}

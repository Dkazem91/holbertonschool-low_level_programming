#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;
	long double a = 1;
	long double b = a + 1;
	long double c = a + b;

	printf("%.0Lf, %.0Lf, ", a, b);
	while (counter < 98)
	{
		printf("%.0Lf", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

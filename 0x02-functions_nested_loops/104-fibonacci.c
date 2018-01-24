#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	double a = 1;
	double b = a + 1;
	double c = a + b;

	printf("%.0f, %.0f, ", a, b);
	while (counter < 97)
	{
		printf("%.0f", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
		if (counter < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

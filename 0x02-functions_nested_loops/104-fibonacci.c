#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;
	unsigned int a = 1;
	unsigned int b = a + 1;
        unsigned int c = a + b;

	printf("%u, %u, ", a, b);
	while (counter < 98)
	{
		printf("%u", c);
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

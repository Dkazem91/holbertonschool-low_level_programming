#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 1;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (counter <= 50)
	{
		printf("%ld", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
		if (counter != 51)
		{
			printf(", ");
		}
	}
	printf("\n");
}

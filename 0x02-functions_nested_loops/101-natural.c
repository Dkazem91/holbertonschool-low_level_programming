#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int b = 0;
	for(a = 1023; a >0; a--)
	{
		if(a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}

	}
	printf("%d \n",b);
	return (0);
}

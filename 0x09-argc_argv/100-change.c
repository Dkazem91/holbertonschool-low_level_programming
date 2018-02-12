#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int coins = 0;

	if (argc == 2)
	{

		int money = atoi(argv[argc - 1]);

		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money -= 25;
				coins++;
			} else if (money % 10 == 0)
			{
				money -= 10;
				coins++;
			} else if (money % 5 == 0)
			{
				money -= 5;
				coins++;
			} else if (money % 2 == 0)
			{
				money -= 2;
				coins++;
			} else
			{
				money--;
				coins++;
			}
		}
		printf("%d\n", coins);
	}
	printf("Error\n");
	return (1);
}

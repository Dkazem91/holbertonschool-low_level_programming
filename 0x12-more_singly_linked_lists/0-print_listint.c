#include "lists.h"
/**
 * print_listint - prints integers in list
 * @h: struct listint_t type
 * Return: size_t value
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

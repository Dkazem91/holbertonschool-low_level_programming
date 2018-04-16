#include "lists.h"
/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

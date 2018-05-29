#include "sort.h"
/**
 * swap - swaps both
 * @p: first node to swap
 * @c: second node to swap
 */
void swap(listint_t *p, listint_t *c)
{
	if (!(p->prev))
	{
		p->prev = c;
		c->prev->next = c->next;
		if (c->next)
			c->next->prev = c->prev;
		c->next = p;
		c->prev = NULL;
	}
	else
	{
		c->prev->next = c->next;
		if (c->next)
			c->next->prev = c->prev;
		p->prev->next = c;
		c->prev = p->prev;
		p->prev = c;
		c->next = p;
	}
}

/**
 * cocktail_sort_list - inserts right unsorted side into left sorted side
 * @list: doubly linked list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *c, *nextnode;
	int end = 0, index, start = 0, swapped;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;

	c = (*list);
	while ((c = c->next))
		end++;
	c = (*list);
	do {
		swapped = 0;
		index  = 0;
		while (c->next && index < end)
		{
			swapped = 0;
			index++;
			nextnode = c->next;
			if (nextnode && c->n > nextnode->n)
			{
				swap(c, nextnode);
				if (!(c->prev))
					*list = c;
				swapped = 1;
			}
			else
				c = c->next;
			if (swapped)
				print_list((*list));
		}
		c = c->prev;
		index--;
		while (c->prev && index > start)
		{
			swapped = 0;
			index--;
			nextnode = c->prev;
			if (nextnode && c->n < nextnode->n)
			{
				swap(nextnode, c);
				if (!(c->prev))
					*list = c;
				swapped = 1;
			}
			else
				c = c->prev;
			if (swapped)
				print_list((*list));
		}
		end--;
		start++;
	} while (swapped);
}

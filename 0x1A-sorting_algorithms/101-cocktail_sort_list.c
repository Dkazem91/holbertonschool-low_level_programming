#include "sort.h"

void swap(listint_t *node_a, listint_t *node_b)
{
	if (!(node_a->prev))
	{
		node_a->prev = node_b;
		node_a->next = node_b->next;
		node_b->prev = NULL;
		node_b->next = node_a;
	}
	else
	{
		node_a->next = node_b->next;
		node_a->prev->next = node_b;
		node_b->prev = node_a->prev;
		node_a->prev = node_b;
		node_b->next = node_a;
	}
}
/**
 * insertion_sort_list - inserts right unsorted side into left sorted side
 * @list: doubly linked list to sort
 *
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *c, *nextnode;
	int end = 0, index, start = 0, swapped;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;
	c = (*list);
	while((c = c->next))
		end++;
	c = (*list);
	do{
		swapped = 0;
		index  = 0;
		while (c->next && index < end)
		{
			index++;
			nextnode = c->next;
			if (nextnode && c->n > nextnode->n)
			{
				swap(c, nextnode);
				if(!(c->prev))
					*list = c;
				swapped = 1;
			}
			else
				c = c->next;
			print_list((*list));
		}
		c = c->prev;
		while (c && index > start)
		{
			index--;
			nextnode = c->prev;
			if (nextnode && c->n < nextnode->n)
			{
				swap(nextnode, c);
				if(!(c->prev))
					*list = c;
				swapped = 1;
			}
			else
				c = c->prev;
			print_list((*list));
		}
		end--;
		start++;
	}while(swapped);
}

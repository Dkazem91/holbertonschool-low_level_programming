#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while(tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}

#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int dex = 0;

	tmp = head;
	if(head == NULL)
		return (NULL);
	while(tmp != NULL && dex != index )
	{
		dex++;
		tmp = tmp->next;
	}
	if(index == dex)
		return (tmp);
	else
		return (NULL);
}

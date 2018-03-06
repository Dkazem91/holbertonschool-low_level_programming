#include "lists.h"
/**
 * free_listint2 - frees a list but head is null
 * @head: linked list and head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}

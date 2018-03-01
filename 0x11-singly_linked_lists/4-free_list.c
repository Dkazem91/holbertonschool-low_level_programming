#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: head var
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head->next != NULL)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}

	free(head);
}

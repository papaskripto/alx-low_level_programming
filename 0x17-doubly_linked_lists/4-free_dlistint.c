#include "lists.h"

/**
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_var;

	while(head)
	{
		temp_var = head->next;
		free(head);
		head = temp_var;
	}
}

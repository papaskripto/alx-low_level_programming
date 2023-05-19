#include "lists.h"

/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ui;

	if(!head)
	{
		return (NULL);
	}
	
	for (ui = 0; head && ui < index; ui++)
	{
		if (!head->next)
			break;
		head = head->next;
	}
	return (head);
}

#include "lists.h"

/**
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int ui;
	dlistint_t *rand = NULL;
	dlistint_t *temp_var = NULL;

	if (!head || !*head)
		return (-1);

	temp_var = *head;

	if (index == 0)
	{
		(*head)->prev = NULL;
		*head = (*head)->next;
		free(temp_var);
		return (1);
	}

	for (ui = 0; ui < index; ui++)
		temp_var = temp_var->next;

	rand = temp_var->next;
	temp_var->next = rand->next;
	rand->next->prev = temp_var;
	free(rand);

	return (1);
}

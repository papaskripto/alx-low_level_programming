#include "lists.h"

/**
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ui;
	dlistint_t *temp_var;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !h)
		return (NULL);

	new_node->n = n;

	if (!*h)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	temp_var = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (ui = 0; temp_var->next && ui < idx; ui++)
	{
		temp_var = temp_var->next;

		if (!temp_var)
			return (NULL);

		if (ui == idx - 1)
		{
			new_node->next = temp_var->next;
			new_node->prev = temp_var->prev;
			temp_var->prev->next = new_node;
			temp_var->next->prev = new_node;
			return (new_node);
		}
	}
	if (!temp_var->next)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

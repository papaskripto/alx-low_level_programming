#include "lists.h"

/**
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_var;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
	{
		return (NULL);
	}

	temp_var = *head;

	new_node->n = n;
	new_node->next = NULL;

	if(!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp_var->next)
		temp_var = temp_var->next;

	temp_var->next = new_node;
	new_node->prev = temp_var;

	return (new_node);



}

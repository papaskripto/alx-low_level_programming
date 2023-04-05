#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index, of a linked list
 * @head: head of the list
 * @index: index of the list, where the node is deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *prev_node;
	listint_t *next;

	prev_node = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && prev_node != NULL; m++)
		{
			prev_node = prev_node -> next;
		}
	}

	if (prev_node == NULL || (prev_node -> next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev_node -> next;

	if (index != 0)
	{
		prev_node -> next = next;
		free(next);
	}
	else
	{
		free(prev_node);
		*head = next;
	}
	return (1);
}

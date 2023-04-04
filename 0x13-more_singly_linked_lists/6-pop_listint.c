#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: head of a list.
 *
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int node_head;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	node_head = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (node_head);
}

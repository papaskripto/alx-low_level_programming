#include "lists.h"

/**
 * size_t print_dlistint - prints all the elements of a list
 * @h: pointer to the list node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int m;

	for (m = 0; h; m++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);
}

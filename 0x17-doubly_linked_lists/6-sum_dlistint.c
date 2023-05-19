#include "lists.h"

/**
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_of_all_data = 0;

	while (head)
	{
		sum_of_all_data += head->n;
		head = head->next;
	}
	return (sum_of_all_data);
}

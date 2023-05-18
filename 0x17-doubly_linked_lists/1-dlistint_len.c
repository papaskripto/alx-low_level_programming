#include "lists.h"

/*
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp_var = (dlistint_t *) h;
	int m;

	for (m = 0; temp_var; ++m)
	{
		temp_var = temp_var->next;
	}
	return (m);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int _sum;

	_sum = 0;
	while (head != NULL)
	{
		_sum += head->n;
		head = head->next;
	}

	return (_sum);
}

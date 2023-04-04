#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *_tmp;
	listint_t *_tmp0;

	if (head != NULL)
	{
		_tmp0 = *head;
		while ((_tmp = _tmp0) != NULL)
		{
			_tmp0 = _tmp0 -> next;
			free(_tmp);
		}
		*head = NULL;
	}
}

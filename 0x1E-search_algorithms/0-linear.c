#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of arrays in the element
 * @value: value to search for
 *
 * Return: -1 if value is not present in array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int _search;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			_search = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, _search);
			if (_search == value)
				return (i);
		}
	}
	return (-1);
}

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints the array to search in
 * @array: pointer to the array
 * @end: end point of the array
 *
 * Return: no value
 */
void print_array(int *array, size_t end)
{
	size_t i;

	printf("Searching array: ");
	while (i <= end)
	{
		printf("%i", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}

/**
 * binary_search_func - searches for a value in a sorted array
 * @array: pointer to array
 * @start: first index of subarray
 * @end: last index of subarray
 * @value: data to find
 *
 * Return: value index or -1 if not found
 */
int binary_search_func(int *array, size_t start, size_t end, int value)
{
	size_t mid_value;

	mid_value = (end + start) / 2;

	if (start > end)
		return (-1);

	print_array(array, end);

	if (array[mid_value] == value)
		return (mid_value);

	if (array[mid_value] > value)
		return (binary_search_func(array, start, mid_value - 1, value));

	if (array[mid_value] < value)
		return (binary_search_func(array, mid_value + 1, end, value));

	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array
 * of integers using binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located
 * -1 if value is not present in array or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_func(array, 0, size - 1, value));
}

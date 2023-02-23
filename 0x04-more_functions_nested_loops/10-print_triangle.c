#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int m, n;

	for (m = 0; m < size; m++)
	{
		for (n = 1; n < (size - m); n++)
			_putchar(' ');
		for (n--; n < size; n++)
			_putchar(35);
		if (m < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

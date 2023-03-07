#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @n: first bytes to be filled
 * @s: memory area pointed to
 * @b: the constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

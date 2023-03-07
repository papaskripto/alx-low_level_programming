#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: string
* @b: character
* @n: integer
* Return: a string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;

	return (s);
}

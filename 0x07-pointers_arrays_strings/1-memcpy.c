#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy
 * Return: string copied from src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}

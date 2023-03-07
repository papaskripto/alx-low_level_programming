#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes to be copied 
 * @src: memory area from which to copy bytes
 * @dest: memory area data is copied to
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}

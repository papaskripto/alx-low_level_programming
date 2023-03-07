#include "main.h"

/**
 * _strpbrk - searches a string for any byte set
 * @accept: string byte
 * @s: string
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int m = 0, n;

	while (s[m])
	{
		n = 0;

		while (accept[n])
		{
			if (s[m] == accept [n])
			{
				s += m;
				return (s);
			}
			n++;
		}
		m++;
	}
	return ('\0');
}

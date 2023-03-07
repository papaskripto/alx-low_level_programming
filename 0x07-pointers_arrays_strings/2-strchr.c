#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string source
 * @c: the char to locate
 *
 * Return: string located
 */
char *_strchr(char *s, char c)
{
	int m;
	int n;

	m = 0;

	while (s[m])
	{
		m++;
	}

	n = 0;

	for (n = 0; n <= m; n++)
	{
		if ((c = s[n]))
		{
			s += n;
			return (s);
		}
	}
	return ('\0');
}

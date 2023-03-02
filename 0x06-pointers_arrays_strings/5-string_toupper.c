#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int h;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] >= 'a' && s[h] <= 'z')
			s[h] = s[h] - 32;
	}

	return (s);
}

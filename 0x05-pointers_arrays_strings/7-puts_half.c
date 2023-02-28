#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, m, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	} else if (len % 2)
	{
		for (m = (len - 1) / 2; m < len - 1; m++)
		{
			_putchar(str[m + 1]);
		}
	}
	_putchar('\n');
}

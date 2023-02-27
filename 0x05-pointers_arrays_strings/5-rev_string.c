#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = strlen(s); /* 1st get the lenght of the string */
	int middle = length / 2; /* find the midpoint of the string */
	char temp;

	int m;

	for (m = 0; m < middle; m++)
	{
		temp = s[m];
		s[m] = s[length - m -1];
		s[length - m -1] = temp;
	}
}


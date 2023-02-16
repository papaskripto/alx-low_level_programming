#include <stdio.h>

/**
 * main - prints exactly and that piece of art is useful",
 *  - Dora Korpar, 2015-10-19, 
 *  followed by a new line, to the standard error
 *
 *  Return: 1
 */
int main(void)
{
	char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", n);

	return (1);
}

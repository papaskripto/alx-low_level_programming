#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int _uint;
	char *ch;

	_uint = 1;
	ch = (char *) &_uint;

	return ((int)*ch);
}

#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int _uint;

	for (_uint = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			_uint++;
	}

	return (_uint);
}

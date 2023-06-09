#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing djb2 algorithm
 * @str: a string used to generate a hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int m;

	hash_value = 5381;
	while ((m = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + m; /* hash * 33 + c */
	}
	return (hash_value);
}

#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

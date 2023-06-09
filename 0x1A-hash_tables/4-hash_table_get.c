#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: is the key
 *
 * Return: element value, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if ((!key || key[0]) || (!ht || ht->array))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp((const char *)key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

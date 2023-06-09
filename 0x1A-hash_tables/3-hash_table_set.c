#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key, must be duplicated,
 * can also be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *temp;

	if ((!key || !value) || (!key[0] || !ht) || (!ht->array))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
		return (1);
	}

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp((const char *)key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	if (!temp)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (1);
}

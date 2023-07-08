#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to add the element to
 * @key: key to add to the hash table
 * @value: value to add to the hash table
 *
 * Return: 1 if the element was added, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new_node;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return 0;

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) != 0)
			{
				free(node->value);
				node->value = strdup(value);
				if (node->value == NULL)
					return 0;
			}
			return 1;
		}
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return 0;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}

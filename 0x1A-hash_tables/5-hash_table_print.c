#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index, count;

	if (ht == NULL)
		return;

	printf("{");
	count = 0;

	for (index = 0; index < ht->size; index++)
	{
		hash_node_t *node = ht->array[index];
		while (node != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			count++;
		}
	}

	printf("}\n");
}

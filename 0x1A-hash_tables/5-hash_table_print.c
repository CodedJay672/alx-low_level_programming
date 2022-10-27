#include "hash_tables.h"

/**
 * hash_table_print -> prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[idx];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}

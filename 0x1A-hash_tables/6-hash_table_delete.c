#include "hash_tables.h"

/**
 * hash_table_delete -> deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned int idx;
	hash_table_t *head = ht;

	if (ht == NULL)
		return;

	for (idx = 0; ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			node = ht->array[idx];
			 while (node != NULL)
			 {
				 temp = node->next;
				 free(node->value);
				 free(node->key);
				 free(node);
				 node = temp;
			 }
		}
	}
	free(head->array);
	free(head);
}

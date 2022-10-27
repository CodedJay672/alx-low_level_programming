#include "hash_tables.h"

/**
 * hash_table_set -> funct to insert items into hash table
 * @ht: hash table to work with
 * @key: key string
 * @value: key value string
 * Return: Always 1 (on success) else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, count;
	hash_node_t *new_node;
	char *val;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (count = index; ht->array[count]; count++)
	{
		if (strcmp(ht->array[count]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = val;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = val;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

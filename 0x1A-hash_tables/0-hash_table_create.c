#include "hash_tables.h"

/**
 * hash_table_create - function which creates a hash table
 * @size: size of table
 * Return: pointer to created table of NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;


	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
	{
		table->array[count] = NULL;
	}
	return (table);
}

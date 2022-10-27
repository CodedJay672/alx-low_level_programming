#include "hash_tables.h"

/**
 * key_index -> gives you the index of a key
 * @key: key argument
 * @size: size of array
 * Return: returns the index for storing key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

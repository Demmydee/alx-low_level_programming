#include "hash_tables.h"

/**
 * key_index - Give the index of a key
 * @key: The key whose index will be given
 * @size: The size of the array of the hash table.
 *
 * Return: The iex which the key should be stored
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

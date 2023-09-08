#include "hash_tables.h"

/**
 * key_index - gets index for where key of hash table is stored
 * @size: size of hash table array
 * @key: Key for the index
 *
 * Return: index of key using the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

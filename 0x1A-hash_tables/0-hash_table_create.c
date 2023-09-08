#include "hash_tables.h"

/**
 * hash_table_create - hash function
 * @size: size of the table
 * Return: pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i = 0;

	new_hash_table = malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!new_hash_table->array)
		return (NULL);

	while (i < size)
	{
		new_hash_table->array[i] = NULL;
		i++;
	}
	return (new_hash_table);
}

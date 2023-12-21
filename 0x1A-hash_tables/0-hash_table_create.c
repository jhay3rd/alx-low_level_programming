#include "hash_tables.h"
/**
 *hash_table_create - function creates the hash table.
 *@size: checks size of the array
 *
 *Return: returns the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(unsigned long int));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}

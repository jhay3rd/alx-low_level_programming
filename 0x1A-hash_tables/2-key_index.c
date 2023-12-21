#include "hash_tables.h"

/**
 *key_index - function which gives index of a key
 *@key: key
 *@size: the size of array
 *Return: returns the address of the key in the array -index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}

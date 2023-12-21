#include "hash_tables.h"

/**
 * hash_djb2 - the hash function that implements the algorithm of djb2
 * @str: a string to the hash
 *
 * Return: returns the hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

#include "hash_tables.h"

/**
 * hash_table_create - Creat hash table
 *
 * @size: Parameter
 *
 * Return: Pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	return (hash);
}

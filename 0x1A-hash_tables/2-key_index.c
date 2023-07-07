#include "hash_tables.h"

/**
 * key_index - Index
 *
 * @key: Parameter1
 * @size: Parmeter2
 *
 * Return: Index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"

/**
 * hash_table_set - Insert
 *
 * @key: Parameter1
 * @value: Parameter2
 *
 * Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *hash;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	hash = malloc(sizeof(hash_node_t));

	if (hash == NULL)
		return (0);
	hash->key = strdup(key);
	hash->value = strdup(value);
	i = key_index((const unsigned char *)key, ht->size);
	hash->next = ht->array[i];
	ht->array[i] = hash;
	return (1);
}

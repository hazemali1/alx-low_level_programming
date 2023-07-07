#include "hash_tables.h"

/**
 * hash_table_get - Get value
 *
 * @ht: PArameter1
 * @key: Parameter2
 *
 * Return: Value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	hash = ht->array[index];
	while (hash)
	{
		node = node->next;
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}

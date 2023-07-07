#include "hash_tables.h"

/**
 * hash_table_delete - Deleting
 *
 * @ht: Parameter
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash = ht;
	hash_node_t *node, *ele;
	unsigned long int s = 0;

	while (s < ht->size)
	{
		node = ht->array[s];
		while (node)
		{
			ele = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = ele;
		}
	}
	free(hash->array);
	free(hash);
}

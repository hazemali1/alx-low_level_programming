#include "hash_tables.h"

/**
 * hash_table_print - Print
 *
 * @ht:Parameter
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned long int s = 0;
	int d = 0;

	if (ht)
	{
		printf("{");
		while (s < ht->size)
		{
			hash = ht->array[s];
			if (hash)
			{
				if (d != 0)
					printf(", ");
				while (hash)
				{
					printf("'%s': '%s'", hash->key, hash->value);
					hash = hash->next;
					if (hash)
						printf(", ");
				}
				d++;
			}
			s++;
		}
		printf("}\n");
	}
}

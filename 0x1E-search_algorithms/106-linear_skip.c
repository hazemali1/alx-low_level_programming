#include "search_algos.h"

/**
 * linear_skip - linear_skip List Serach
 * @list: Array
 * @value: Value looking for
 * Return: return pointer
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	int s, q;
	size_t size = 0;
	skiplist_t *h, *k, *x;

	x = list;
	while (x)
	{
		x = x->next;
		size++;
	}
	s = sqrt(size);
	if (list == NULL)
		return (NULL);
	h = list;
	while (h && h->next && h->n < value)
	{
		k = h;
		for (q = 0; h->next && q < s; q++)
			h = h->next;
		if (h->next)
			printf("Value checked at index [%lu] = [%d]\n", h->index, h->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", k->index, h->index);
	while (k && k->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", k->index, k->n);
		if (k->n == value)
		{
			return (k);
		}
		k = k->next;
	}
	return (NULL);
}

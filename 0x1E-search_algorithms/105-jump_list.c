#include "search_algos.h"

/**
 * jump_list - Jump List Serach
 * @list: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return pointer
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int s = sqrt(size), q;
	listint_t *h, *k;

	if (list == NULL)
		return (NULL);
	h = list;
	while (h && h->next && h->n < value)
	{
		k = h;
		for (q = 0; h->next && q < s; q++)
			h = h->next;
		printf("Value checked at index [%lu] = [%d]\n", h->index, h->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", k->index, h->index);
	for (; k && k->index; k = k->index)
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

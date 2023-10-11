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
	size_t i, f, l, ii;
	int s = sqrt(size), t = 0, q;
	listint_t *h, *k;

	if (list == NULL)
		return (NULL);
	h = list;
	while (h && h->next && h->n < value)
	{
		q = h;
		for (q = 0; h->next && q < s; q++)
			h = h->next;
		printf("Value checked at index [%lu] = [%d]\n", h->index, h->n);
		if (h->n > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - s, i);
			f = i - s;
			l = i;
			t = 1;
			break;
		}
		
		i += s;
	}
	if (t == 0)
	{
		if (i >= size)
			ii = size - 1;
		printf("Value checked at index [%ld] = [%d]\n", ii, h->n);
		printf("Value found between indexes [%ld] and [%ld]\n", i - s, ii);
		f = i - s;
		l = size - 1;
	}
	for (i = f; i <= l; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n", i, k->n);
		if (k->n == value)
		{
			return (k);
		}
		k = k->next;
	}
	return (NULL);
}

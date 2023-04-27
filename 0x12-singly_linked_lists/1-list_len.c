#include "lists.h"

/**
 * list_len - Number of elements
 *
 * @h: Parameter
 *
 * Return: Number
*/
size_t list_len(const list_t *h)
{
	size_t s = 0;
	const list_t *d;

	d = h;
	while (d != NULL)
	{
		s++;
		d = d->next;
	}
	return (s);
}

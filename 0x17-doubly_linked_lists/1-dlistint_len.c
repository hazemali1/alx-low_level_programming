#include "lists.h"

/**
 * dlistint_len - Lenght
 *
 * @h: Parameter
 *
 * Return: Return size
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *s;
	size_t d = 0;

	s = h;
	while (s != NULL)
	{
		d++;
		s = s->next;
	}
	return (d);
}

#include "lists.h"

/**
 * listint_len - Lenght
 *
 * @h: Parameter
 *
 * Return: Size
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *s;
	size_t d = 0;

	s = h;
	while (s != NULL)
	{
		d++;
		s = s->next;
	}
	return (d);
}

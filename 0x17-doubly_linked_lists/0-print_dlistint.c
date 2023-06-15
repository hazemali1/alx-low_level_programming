#include "lists.h"

/**
 * print_dlistint - Print
 *
 * @h: Parameter
 *
 * Return: Return size
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *s;
	size_t d = 0;

	s = h;
	while (s != NULL)
	{
		printf("%d\n", s->n);
		d++;
		s = s->next;
	}
	return (d);
}

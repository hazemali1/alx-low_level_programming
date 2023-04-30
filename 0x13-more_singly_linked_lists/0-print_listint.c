#include "lists.h"

/**
 * print_listint - Print nodes
 *
 * @h: Parameter
 *
 * Return: Size
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *s;
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

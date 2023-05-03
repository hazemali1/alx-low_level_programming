#include "lists.h"

/**
 * free_listint_safe - Free
 *
 * @h: Parameter
 *
 * Return: Size
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *s, *d;
	size_t w = 0;
	int q;

	q = find_listint_loop(*h);
	s = *h;
	while (s != NULL && w < q)
	{
		d = s->next;
		s->next = NULL;
		free(s);
		s = d;
		w++;
	}
	*h = NULL;
	return (w);
}

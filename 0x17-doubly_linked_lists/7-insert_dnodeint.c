#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert by index
 *
 * @h: Parameter1
 * @idx: Parameter2
 * @n: Parameter3
 *
 * Return: Pointer
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *s, *d, *w;
	unsigned int e = 0;

	if (h == NULL)
		return (NULL);
	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);
	w->n = n;
	if (idx == 0)
	{
		w->next = *h;
		w->prev = NULL;
		if (*h != NULL)
			(*h)->prev = w;
		*h = w;
		return (w);
	}
	s = *h;
	while (s != NULL && e < idx - 1)
	{
		s = s->next;
		e++;
	}
	d = s->next;
	s->next = w;
	w->prev = s;
	w->next = d;
	if (d != NULL)
		d->prev = w;
	return (*h);
}

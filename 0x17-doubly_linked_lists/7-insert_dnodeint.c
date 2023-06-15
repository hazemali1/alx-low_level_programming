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

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);
	w->n = n;
	s = *h;
	d = (*h)->next;
	if (idx == 0)
	{
		w->next = *h;
		w->prev = NULL;
		if (*h != NULL)
			(*h)->prev = w;
		*h = w;
		return (*h);
	}
	while (d != NULL && e < idx - 1)
	{
		d = d->next;
		s = s->next;
		e++;
	}
	s->next = w;
	w->prev = s;
	w->next = d;
	d->prev = w;
	return (*h);
}

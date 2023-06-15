#include "lists.h"

/**
 * add_dnodeint_end - Add at end
 *
 * @head: PArmeter1
 * @n: Parmeter2
 *
 * Return: Pointer
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *s, *d;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = NULL;
	d = *head;
	while (d->next != NULL)
		d = d->next;
	d->next = s;
	s->prev = d;
	return (s);
}

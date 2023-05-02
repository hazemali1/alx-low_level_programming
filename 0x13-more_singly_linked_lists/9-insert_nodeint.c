#include "lists.h"

/**
 * insert_nodeint_at_index - Insert at index
 *
 * @head: Parameter1
 * @idx: Parameter2
 * @n: Parameter3
 *
 * Return: Pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s, *e, *w, *q;
	unsigned int d, f = 0;

	q = *head;
	while (q != NULL)
	{
		q = q->next;
		f++;
	}
	if (f < idx)
	{
		return (NULL);
	}
	s = malloc(sizeof(listint_t));
	if (s == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		s->n = n;
		s->next = *head;
		*head = s;
		return (s);
	}
	e = *head;
	w = *head;
	s->n = n;
	e = e->next;
	for (d = 1; d < idx; d++)
	{
		w = w->next;
		e = e->next;
	}
	w->next = s;
	s->next = e;
	return (s);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - Del
 *
 * @head: Parmeter1
 * @index: Parmeter2
 *
 * Return: 1, -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *s, *d, *w;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);
	s = *head;
	if (index == 0)
	{
		*head = s->next;
		s->next = NULL;
		free(s);
		return (1);
	}
	while (s != NULL && e < index)
	{
		s = s->next;
		e++;
	}
	if (e == index)
	{
		d = s->prev;
		w = s->next;
		d->next = s->next;
		w->prev = d;
		free(s);
		return (1);
	}
	else
		return (-1);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - Delet at index
 *
 * @head: Parameter1
 * @index: Parameter2
 *
 * Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *s, *e, *q;
	unsigned int d, f = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	q = *head;
	while (q != NULL)
	{
		q = q->next;
		f++;
	}
	if (f <= index && index != 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		s = *head;
		e = *head;
		e = e->next;
		*head = e;
		free(s);
		return (1);
	}
	s = *head;
	e = *head;
	e = e->next;
	for (d = 1; d < index; d++)
	{
		s = s->next;
		e = e->next;
	}
	s->next = e->next;
	free(e);
	return (1);
}

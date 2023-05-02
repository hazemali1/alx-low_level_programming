#include "lists.h"

/**
 * reverse_listint - Rev
 *
 * @head: Parameter
 *
 * Return: NULL
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *s, *d;

	if (*head == NULL)
	{
		return (NULL);
	}
	s = *head;
	d = s->next;
	s->next = NULL;
	while (d != NULL)
	{
		s = d;
		d = d->next;
		s->next = *head;
		*head = s;
	}
	return (s);
}

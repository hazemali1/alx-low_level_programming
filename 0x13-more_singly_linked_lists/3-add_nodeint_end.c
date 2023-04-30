#include "lists.h"

/**
 * add_nodeint_end - Adding at end
 *
 * @head: Parameter1
 * @n: Parameter2
 *
 * Return: Pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s, *d;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		s->n = n;
		s->next = NULL;
		*head = s;
	}
	else
	{
		s->n = n;
		s->next = NULL;
		d = *head;
		while (d->next != NULL)
		{
			d = d->next;
		}
		d->next = s;
	}
	return (s);
}

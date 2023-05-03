#include "lists.h"

/**
 * find_listint_loop - Finding
 *
 * @head: Parameter
 *
 * Return: Pointer
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *d;

	if (head == NULL)
	{
		return (NULL);
	}
	d = head;
	d = d->next;
	while (d != NULL)
	{
		if (d == d->next)
		{
			return (d);
		}
		s = head;
		while (s != d)
		{
			if (s == d->next)
			{
				return (s);
			}
			s = s->next;
		}
		d = d->next;
	}
	return (NULL);
}

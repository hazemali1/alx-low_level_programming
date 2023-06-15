#include "lists.h"

/**
 * sum_dlistint - Sum
 *
 * @head: Parameter
 *
 * Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *d;

	if (head == NULL)
		return (0);
	d = head;
	while (d != NULL)
	{
		s += d->n;
		d = d->next;
	}
	return (s);
}

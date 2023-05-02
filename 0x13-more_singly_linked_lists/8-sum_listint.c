#include "lists.h"

/**
 * sum_listint - Sum
 *
 * @head: Parameter
 *
 * Return: Sum
*/
int sum_listint(listint_t *head)
{
	listint_t *s;
	int d = 0;

	if (head == NULL)
	{
		return (0);
	}
	s = head;
	while (s != NULL)
	{
		d += s->n;
		s = s->next;
	}
	return (d);
}

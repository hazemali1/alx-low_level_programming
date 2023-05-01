#include "lists.h"

/**
 * free_listint - Free
 *
 * @head: Parameter
*/
void free_listint(listint_t *head)
{
	listint_t *s, *d;

	if (head == NULL)
	{
		return;
	}
	s = head;
	while (s != NULL)
	{
		d = s->next;
		free((void *)s->n);
		free(s);
		s = d;
	}
}

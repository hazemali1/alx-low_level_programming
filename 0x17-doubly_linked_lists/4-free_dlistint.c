#include "lists.h"

/**
 * free_dlistint - Free
 *
 * @head: Parameter
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *s;

	s = head;
	while (s != NULL)
	{
		s = s->next;
		free(head);
		head = s;
	}
}

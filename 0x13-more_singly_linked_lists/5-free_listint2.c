#include "lists.h"

/**
 * free_listint2 - Free
 *
 * @head: Parameter
*/
void free_listint2(listint_t **head)
{
	listint_t *s, *d;

	if (head == NULL)
	{
		return;
	}
	s = *head;
	while (s != NULL)
	{
		d = s->next;
		free(s);
		s = d;
	}
	*head = NULL;
}

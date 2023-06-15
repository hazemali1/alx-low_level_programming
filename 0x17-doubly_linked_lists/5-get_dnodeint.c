#include "lists.h"

/**
 * get_dnodeint_at_index - Get node
 *
 * @head: Parmeter1
 * @index: PArameter2
 *
 * Return: Node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *s;
	unsigned int d = 0;

	if (head == NULL)
		return (NULL);
	s = head;
	while (s != NULL && d < index)
	{
		d++;
		s = s->next;
	}
	return (s);
}

#include "lists.h"

/**
 * get_nodeint_at_index - Get index
 *
 * @head: Parameter1
 * @index: Parameter2
 *
 * Return: Node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *s, *e;
	unsigned int d, w = 0;

	s = head;
	e = head;
	while (e != NULL)
	{
		e = e->next;
		w++;
	}
	if (w <= index)
	{
		return (NULL);
	}
	for (d = 0; d < index; d++)
	{
		s = s->next;
	}
	return (s);
}

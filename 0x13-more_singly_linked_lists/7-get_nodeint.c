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
	listint_t *s;
	unsigned int d;

	s = head;
	for (d = 0; d < index; d++)
	{
		s = s->next;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}

#include "lists.h"

/**
 * pop_listint - POP
 *
 * @head: Parameter
 *
 * Return: Element
*/
int pop_listint(listint_t **head)
{
	listint_t *s;
	int d;

	if (*head == NULL)
	{
		return (0);
	}
	s = *head;
	d = s->n;
	s = s->next;
	free(*head);
	*head = s;
	return (d);
}

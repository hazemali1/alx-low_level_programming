#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adding
 *
 * @head: Parameter1
 * @str: Parameter2
 *
 * Return: Pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *d;

	d = *head;
	s = malloc(sizeof(list_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->str = strdup(str);
	if (*head == NULL)
	{
		*head = s;
		s->next = NULL;
	}
	else
	{
		while (d->next != NULL)
		{
			d = d->next;
		}
		d->next = s;
		s->next = NULL;
	}
	return (s);
}

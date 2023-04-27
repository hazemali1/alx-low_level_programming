#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adding
 *
 * @head: Parameter1
 * @str: Parameter2
 *
 * Return: Pointer
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *s;

	s = malloc(sizeof(list_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->str = strdup(str);
	s->next = *head;
	*head = s;
	return (s);
}

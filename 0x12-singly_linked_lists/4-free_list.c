#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free
 *
 * @head: Parameter
*/
void free_list(list_t *head)
{
	list_t *s, *d;

	if (head == NULL)
	{
		return;
	}
	s = head;
	while (s != NULL)
	{
		d = s->next;
		free(s->str);
		free(s);
		s = d;
	}
}

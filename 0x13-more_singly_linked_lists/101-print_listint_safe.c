#include "lists.h"

/**
 * print_listint_safe - Print safe
 *
 * @head: Parameter
 *
 * Return: Return Size
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *stored[100000];
	size_t d, w = 0, r = 0;

	s = head;
	while (s != NULL)
	{
		for (d = 0; d < w; d++)
		{
			if (s == stored[d])
			{
				printf("-> [%p] ", s);
				printf("%d\n", s->n);
				return (w);
			}
		}
		w++;
		stored[r] = s;
		r++;
		printf("[%p] ", s);
		printf("%d\n", s->n);
		s = s->next;
	}
	return (w);
}

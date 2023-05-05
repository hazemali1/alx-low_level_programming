#include "lists.h"

/**
 * find_size_loop - Size
 *
 * @head: Parameter
 *
 * Return: Size
*/
size_t find_size_loop(listint_t *head)
{
	listint_t *s, *d;
	size_t w = 0;

	if (head == NULL)
	{
		return (0);
	}
	d = head;
	d = d->next;
	while (d != NULL)
	{
		if (d == d->next)
		{
			return (w);
		}
		s = head;
		while (s != d)
		{
			if (s == d->next)
			{
				w++;
				return (w);
			}
			s = s->next;
		}
		d = d->next;
		w++;
	}
	return (189);
}

/**
 * free_listint_safe - Free
 *
 * @h: Parameter
 *
 * Return: Size
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *s, *d, *t;
	size_t w = 0, q;

	q = find_size_loop(*h);
	if (q == 189)
	{
		t = *h;
		while (t != NULL)
		{
			q++;
			t = t->next;
		}
	}
	s = *h;
	while (s != NULL && w <= q)
	{
		d = s->next;
		s->next = NULL;
		free(s);
		s = d;
		w++;
	}
	*h = NULL;
	return (w);
}

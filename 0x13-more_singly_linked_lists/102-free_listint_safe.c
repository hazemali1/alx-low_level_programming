#include "lists.h"

/**
 * find_listint_loop - Finding
 *
 * @head: Parameter
 *
 * Return: Size
 */
int *find_listint_loop(listint_t *head)
{
        listint_t *s, *d;
	int w = 0;

        if (head == NULL)
        {
                return (w);
        }
        d = head;
        d = d->next;
	w++;
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
                                return (s);
                        }
			else
			{
				w++;
                        	s = s->next;
			}
                }
		w = 0;
                d = d->next;
        }
        return (NULL);
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
	listint_t *s, *d;
	size_t w = 0;
	int q;

	q = find_listint_loop(*h);
	s = *h;
	while (s != NULL && w < q)
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

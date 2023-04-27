#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print
 *
 * @h: Parameter
 *
 * Return: Size
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;
	const list_t *d;
	int w;
	char *e;

	d = h;
	while (d != NULL)
	{
		s++;
		if (d->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			e = d->str;
			w = 0;
			while (*e != '\0')
			{
				w++;
				e++;
			}
			printf("[%d] %s\n", w, d->str);
		}
		d = d->next;
	}
	return (s);
}

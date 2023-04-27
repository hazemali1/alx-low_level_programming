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
	const list_ *d;

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
			printf("[%d] %s\n", d->len, d->str);
		}
		d = d->next;
	}
	return (s);
}

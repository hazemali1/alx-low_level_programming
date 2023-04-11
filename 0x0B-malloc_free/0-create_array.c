#include <stdlib.h>
#include "main.h"

/**
 * create_array - creating
 *
 * @size: Parameter1
 * @c: Parameter2
 *
 * Return: Return *
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int d;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < size; d++)
	{
		s[d] = c;
	}
	return (s);
}

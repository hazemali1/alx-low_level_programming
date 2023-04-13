#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Calloc
 *
 * @nmemb: Parameter1
 * @size: Parameter
 *
 * Return: Return pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int d;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < (nmemb * size); d++)
	{
		s[d] = 0;
	}
	return (s);
}

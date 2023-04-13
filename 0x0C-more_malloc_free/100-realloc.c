#include <stdlib.h>
#include "main.h"

/**
 * helping - Realloc
 *
 * @ptr: Parameter1
 * @old_size: Parameter2
 * @new_size: Parameter3
 *
 * Return: Return pointer
*/
char *helping(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *w;

	if (new_size == old_size)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		w = malloc(new_size);
		if (w == NULL)
		{
			return (NULL);
		}
		return (w);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

/**
 * _realloc - Realloc
 *
 * @ptr: Parameter1
 * @old_size: Parameter2
 * @new_size: Parameter3
 *
 * Return: Return pointer
*/
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int d, r = 0;

	ptr = helping(ptr, old_size, new_size);
	if (new_size > old_size)
	{
		s = malloc(new_size - old_size);
		if (s == NULL)
		{
			return (NULL);
		}
		for (d = old_size; d < new_size; d++)
		{
			ptr[d] = s[r];
			r++;
		}
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

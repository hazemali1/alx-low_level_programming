#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Realloc
 *
 * @ptr: Parameter1
 * @old_size: Parameter2
 * @new_size: Parameter3
 *
 * Return: Return pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *w, *s;
	int d, r = 0;

	if (new_size == old_size)
		return (NULL);
	if (ptr == NULL)
		w = malloc(sizeof(*ptr) * new_size);
		if (w == NULL)
			return (NULL);
		return (w);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);
	if (new_size > old_size)
		s = melloc(sizeof(*ptr) * (new_size - old_size));
		if (s == NULL)
			return (NULL);
		for (d = old_size; d < new_size; d++)
			ptr[d] = s[r];
			r++;
	if (ptr == NULL)
		free(ptr);
		return (NULL);
	return (ptr);
}

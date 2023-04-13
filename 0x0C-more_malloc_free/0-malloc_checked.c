#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Malloc
 *
 * @b: Parameter
 *
 * Return: Return Pointer
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}

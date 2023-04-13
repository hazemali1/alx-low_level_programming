#include <stdlib.h>
#include "main.h"

/**
 * array_range - Array
 *
 * @min: Parameter1
 * @max: Parameter2
 *
 * Return: Return pointer
*/
int *array_range(int min, int max)
{
	int *s, d, q;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	q = (max - min + 1);
	for (d = 0; d < q; d++)
	{
		s[d] = min;
		min++;
	}
	return (s);
}

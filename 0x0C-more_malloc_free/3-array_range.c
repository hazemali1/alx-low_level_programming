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
	int *s, d;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * (max - min + 1));
	if (s == 0)
	{
		return (NULL);
	}
	for (d = min; d <= max; d++)
	{
		s[d] = d;
	}
	return (s);
}

#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Array
 *
 * @width: Parameter1
 * @height: Parameter2
 *
 * Return: Return pointer
*/
int **alloc_grid(int width, int height)
{
	int **s;
	int d, f;

	s = (int **)malloc(sizeof(int *) * height);
	for (d = 0; d < height; d++)
	{
		s[d] = (int *)malloc(sizeof(int) * width);
	}
	if (s == 0)
	{
		return (NULL);
	}
	for (d = 0; d < height; d++)
	{
		for (f = 0; f < width; f++)
			s[d][f] = 0;
	}
	return (s);
}

#include "function_pointers.h"

/**
 * int_index - Search
 *
 * @array: Parameter1
 * @size: Parameter2
 * @cmp: Parameter3
 *
 * Return: Return s, -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
		{
			return (s);
		}
	}
	return (-1);
}

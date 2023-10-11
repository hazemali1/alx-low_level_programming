#include "search_algos.h"

/**
 * interpolation_search - Interpolation Serach
 * @array: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return index
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t i;
	size_t pos = 0 + (((double)((size - 1) - 0) / (array[size - 1] - array[0])) * (value - array[0]));

	if (array == NULL)
		return (-1);
	for (i = pos; i < size; i++)
	{
		printf("Value checked arrayy[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	if (pos > size)
		printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

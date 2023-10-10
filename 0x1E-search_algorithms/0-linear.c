#include "search_algos.h"

/**
 * linear_search - Linear Serach
 * @array: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return index
*/
int linear_search(int *array, size_t size, int value)
{
	size_t s;

	if (array == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		if (array[s] == value)
			return (s);
	}
	return (-1);
}

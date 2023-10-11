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
	size_t pos, i, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		i = pos;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		else if (value > array[i])
		{
			low = pos + 1;
			high = high;
		}
		else
		{
			low = low;
			high = pos - 1;
		}
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

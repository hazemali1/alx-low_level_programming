#include "search_algos.h"

/**
 * advanced_binary - Advanced Binary Serach
 * @array: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return index
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, s;
	int *arr, d;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (size % 2 == 0)
		s = (size / 2) - 1;
	else
		s = size / 2;
	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i + 1 == size)
			printf("\n");
		else
			printf(",");
	}
	if (array[s] == value && (s == 0 || array[s - 1] != value))
		return (s);
	else if (value < array[s])
	{
		return (advanced_binary(array, s, value));
	}
	else if (value > array[s])
	{
		arr = array + s + 1;
		d = advanced_binary(arr, size - s - 1, value);
		if (d != -1)
			return (d + s + 1);
		else
			return (d);
	}
	else
	{
		return (advanced_binary(array, s + 1, value));
	}
	return (-1);
}

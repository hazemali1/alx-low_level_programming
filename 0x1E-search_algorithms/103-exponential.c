#include "search_algos.h"

int binary_search(int *array, size_t size, int value);

/**
 * binary_search - Binary Serach
 * @array: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return index
*/
int binary_search(int *array, size_t size, int value)
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
	if (array[s] == value)
		return (s);
	else if (value < array[s])
	{
		return (binary_search(array, s, value));
	}
	else
	{
		arr = array + s + 1;
		d = binary_search(arr, size - s - 1, value);
		if (d != -1)
			return (d + s + 1);
		else
			return (d);
	}
	return (-1);
}

/**
 * exponential_search - Exponential Serach
 * @array: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return index
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t s = 1, q;
	int *arr, d;

	if (array == NULL)
		return (-1);
	while (s < size && value >= array[s])
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		s *= 2;
	}
	q = s;
	if (q >= size)
		q = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", s / 2, q);
	arr = array + (s / 2);
	d = binary_search(arr, q - s / 2 + 1, value);
	if (d != -1)
		return (d + s / 2);
	return (-1);
}

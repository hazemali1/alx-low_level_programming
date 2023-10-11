#include "search_algos.h"

/**
 * jump_search - Jump Serach
 * @array: Array
 * @size: Size of array
 * @value: Value looking for
 * Return: return index
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, f, l;
	int s = sqrt(size), t = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i += s)
	{
		if (array[i] < value)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - s, i);
			f = i - s;
			l = i;
			t = 1;
			break;
		}
	}
	if (t == 0)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i - s, i);
		f = i - s;
		l = size - 1;
	}
	for (i = f; i <= l; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

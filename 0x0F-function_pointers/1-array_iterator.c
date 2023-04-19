#include "function_pointers.h"

/**
 * array_iterator - Executes
 *
 * @array: Parameter1
 * @size: Parameter2
 * @action: Parameter3
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}

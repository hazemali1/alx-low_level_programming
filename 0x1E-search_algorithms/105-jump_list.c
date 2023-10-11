#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Jump List Search
 * @list: Pointer to the head of the linked list
 * @size: Size of the linked list
 * @value: Value to search for
 * Return: Pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	prev = NULL;

	while (current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (!current->next)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}

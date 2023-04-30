#include "lists.h"

/**
 * add_nodeint - Addind at begging
 *
 * @head: Parameter1
 * @n: PArameter2
 *
 * Return: Pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->n = n;
	s->next = *head;
	*head = s;
	return (s);
}

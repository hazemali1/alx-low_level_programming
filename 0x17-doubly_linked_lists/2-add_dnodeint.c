#include "lists.h"

/**
 * add_dnodeint - Add at beging
 *
 * @heaad: Parameter1
 * @n: PArametrer2
 *
 * Return: Pointer
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *s;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	s ->next = *head;
	s->prev = NULL;
	*head->prev = s;
	*head = s;
	return (s);
}

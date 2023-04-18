#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Copy
 *
 * @name: Parameter1
 * @age: Parameter2
 * @owner: Parameter3
 *
 * Return: Return pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;

	s = malloc(sizeof(dog_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->name = name;
	s->owner = owner;
	return (s);
}

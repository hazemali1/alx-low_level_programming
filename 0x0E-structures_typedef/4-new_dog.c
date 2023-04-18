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
	int d = 0, e = 0, w = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	s = malloc(sizeof(dog_t));
	if (s == NULL)
	{
		return (NULL);
	}
	while (name[d])
	{
		d++;
	}
	s->name = malloc(sizeof(char) * (d + 1));
	if (s->name == NULL)
	{
		free(s);
		return (NULL);
	}
	while (owner[e])
	{
		e++;
	}
	s->owner = malloc(sizeof(char) * (e + 1));
	if (s->owner == NULL)
	{
		free(s);
		return (NULL);
	}
	for (w = 0; w < d; w++)
		s->name[w] = name[w];
	s->name[w] = '\0';
	for (w = 0; w < e; w++)
		s->owner[w] = owner[w];
	s->owner[w] = '\0';
	s->name = s->name;
	s->age = age;
	s->owner = s->owner;
	return (s);
}

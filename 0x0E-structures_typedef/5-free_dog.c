#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free
 *
 * @d: Parameter
*/
void free_dog(dog_t *d)
{
	if (d->name != NULL || d->owner != NULL)
	{
	free(d->name);
	free(d->owner);
	}
	free(d);
}

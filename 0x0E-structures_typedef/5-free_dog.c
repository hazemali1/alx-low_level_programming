#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free
 *
 * @d: Parameter
*/
void free_dog(dog_t *d)
{
	free(d);
}

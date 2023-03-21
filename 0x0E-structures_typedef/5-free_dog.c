#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the allocated memory for the previous dog function
 * @d: pointer to the dog function.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

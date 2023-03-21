#include "dog.h"
#include <stdio.h>

/**
 * print_dog - creates a struct dog.
 *
 * @d: pointer to the struct dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nill)\n");

	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);

}

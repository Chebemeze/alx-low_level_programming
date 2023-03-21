#include "dog.h"
/**
 * init_dog - initilizes the struct dog.
 * @d: adress of struct my_dog.
 * @name: pointer to the name.
 * @age: pointer to the age.
 * @owner: pointer to the owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

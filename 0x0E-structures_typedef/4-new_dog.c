#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - creates a new dog(pointer with thesame details as the last).
 * @name: pointer to the name
 * @age: age
 * @owner: points to the owner
 * Return: address of the pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	/**
	 * gets the length of string name
	 */
	for (i = 0; name[i] != '\0'; i++)
		;
	ptr->name = malloc(sizeof(char) * (i + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	/**
	 * gets the length of string owner
	 */
	for (j = 0; owner[j] != '\0'; j++)
		;
	ptr->owner = malloc(sizeof(char) * (j + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	(*ptr).name = strcpy(ptr->name, name);
	(*ptr).age = age;
	(*ptr).owner = strcpy(ptr->owner, owner);

	return (ptr);
}

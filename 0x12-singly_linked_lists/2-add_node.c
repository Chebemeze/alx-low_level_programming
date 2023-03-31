#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Creates a new node at the beginning
 * of a list_t list.
 *
 * @head: a pointerto the beginning of a list.
 *
 * @str: the string to be added to the new list.
 *
 * Return: the address of the new element if it does
 * not fail. returns NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *s;
	list_t *temp;

	s = strdup(str);
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s[i])
	{
		i++;
	}

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = s;
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (temp);
}

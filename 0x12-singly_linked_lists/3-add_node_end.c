#include "lists.h"
#include <string.h>

/**
 * add_node_end - Creates a new node at the ending
 * of a list_t list.
 *
 * @head: a pointer to the beginning of a list.
 *
 * @str: the string to be added to the new list.
 *
 * Return: the address of the new element if it does
 * not fail. returns NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int i;
	list_t *temp, *last_p;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	s = strdup(str);
	if (s == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	temp->str = s;
	temp->len = i;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		last_p = *head;
		while (last_p->next != NULL)
			last_p = last_p->next;
		last_p->next = temp;
	}

	return (*head);
}

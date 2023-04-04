#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - Creates a new node at the beginning
 * of a list_t list.
 *
 * @head: a pointer to the beginning of a list.
 *
 * @n: the int to be added to the new list.
 *
 * Return: the address of the new element if it does
 * not fail. returns NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}

#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Creates a new node at the end
 * of a list_t list.
 *
 * @head: a pointer to the beginning of a list.
 *
 * @n: the integer to be added to the new list.
 *
 * Return: the address of the new element if it does
 * not fail. returns NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int j;
	listint_t *temp, *second_ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	j = n;
	temp->n = j;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		second_ptr = *head;
		while (second_ptr->next != NULL)
			second_ptr = second_ptr->next;
		second_ptr->next = temp;
	}

	return (*head);
}

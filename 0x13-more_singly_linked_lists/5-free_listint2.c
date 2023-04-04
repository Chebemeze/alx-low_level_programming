#include "lists.h"

#include <stdlib.h>

/**
 * free_listint2 - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr_head;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		ptr_head = *head;
		free(ptr_head);
		*head = temp;
	}
}

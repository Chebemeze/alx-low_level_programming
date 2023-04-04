#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the first address of the head node.
 * Return: returns the head node’s data (n). but if the linked ist
 * is empty it returns 0.
 */

int pop_listint(listint_t **head)
{
	int data_n;
	listint_t *temp, *ptr_head;

	if (*head != NULL)
	{
		temp = (*head)->next;
		ptr_head = *head;
		data_n = (*head)->n;
		free(ptr_head);
		*head = temp;
	}
	else if (*head == NULL)
		return (0);

	return (data_n);
}

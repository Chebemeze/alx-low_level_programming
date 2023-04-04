#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: a pointer to the first node of index zero(0).
 * @index: signifies the node address to be returned
 * Return: returns the address of the nth node of a listint_t list,
 * if the node does not exist returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int numb;
	listint_t *p;

	numb = 0;
	while (head->next != NULL && numb < (index + 1))
	{
		if (numb < index)
			p = head->next;

		head = head->next;
		numb++;
	}
	if (head->next == NULL)
		return (NULL);

	return (p);
}

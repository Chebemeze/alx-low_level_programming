#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at the given position.
 *
 * @head: a pointer to the first node of the list.
 *
 * @index: signifies where i.e address to delete node.
 *
 * Return: returns 1 if it deletes the node or -1 if it fails to
 * delete it. if index is greater than the list it also returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *secondptr;
	unsigned int numb;

	secondptr = *head;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		p = secondptr->next;
		*head = p;
		free(secondptr);

		return (1);
	}

	numb = 1;
	while (numb < index)
	{
		if (secondptr == NULL)
			return (-1);
		secondptr = secondptr->next;
		numb++;
	}
	p = secondptr->next;
	secondptr->next = p->next;
	free(p);

	return (1);
}

#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a node at the given position.
 *
 * @head: a pointer to the first node of index zero(0).
 *
 * @idx: signifies where i.e address to insert the new node.
 *
 * @n: the integer to input.
 *
 * Return: returns the address of the new node or NULL if it failed,
 * if is it not possible to add the new node at
 * index idx, do not add it and returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *secondptr;
	unsigned int numb;

	secondptr = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		p = malloc(sizeof(listint_t));
		p->n = n;
		p->next = *head;
		*head = p;
		return (p);
	}

	numb = 1;
	while (numb < idx)
	{
		if (secondptr == NULL)
			return (NULL);
		secondptr = secondptr->next;
		numb++;
	}

	if (secondptr->next == NULL)
		return (NULL);

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = secondptr->next;
	secondptr->next = p;

	return (p);
}

#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all the element in a listint_t list.
 * @h: a pointer to the first node.
 * Return: returns the number of nodes present in the listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num;

	nodes_num = 0;
	if (h != NULL)
	{
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			nodes_num++;
			h = h->next;
		}
		printf("%d\n", h->n);
		nodes_num++;
	}

	return (nodes_num);
}

#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - determine the number of nodes in a listint_t list.
 * @h: a pointer to the first node.
 * Return: returns the number of nodes present in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_num;

	nodes_num = 0;
	if (h != NULL)
	{
		while (h->next != NULL)
		{
			nodes_num++;
			h = h->next;
		}
		nodes_num++;
	}

	return (nodes_num);
}

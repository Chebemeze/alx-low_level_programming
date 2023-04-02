#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - If the string is NULL it prints 0 and (nil).
 * Else prints its lenth and the string.
 * @h: A pointer to the list_t.
 * Return: the number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");

			else
				printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			num_nodes++;
		}
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		num_nodes++;
	}

	return (num_nodes);
}

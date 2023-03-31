#include "lists.h"
#include <stdio.h>

/**
 * print_list - If the string is NULL it prints 0 and (nil).
 * Else prints its lenth and the string.
 * @h: A pointer to the list_t.
 * Return: the number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t num_node;

	num_node = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] [%s]\n", h->len, h->str);

		h = h->next;
		num_node ++;
	}

	return (num_node);
}

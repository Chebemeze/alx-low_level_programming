#include "lists.h"
#include <stddef.h>

/**
 * sum_listin - returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: a pointer to the first node.
 * Return: returns the sum of the data (n) of a listint_t linked list.
 * if the list is empty it returns zero(0).
 */

int sum_listint(listint_t *head)
{
	int sum_num;

	sum_num = 0;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum_num += head->n;
			head = head->next;
		}
		sum_num += head->n;
	}
	else
		return (0);

	return (sum_num);
}

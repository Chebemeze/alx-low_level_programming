#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - print chess
 * @a:pointer to the matrix
 * @size::size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, first_diag, second_diag, low, high;

	low = 0;
	high = size - 1;
	first_diag = 0;
	second_diag = 0;
	for (i = 0; i < size; i++)
	{
		first_diag = first_diag + a[low];
		second_diag = second_diag + a[high];
		low += size + 1;
		high += size - 1;
	}
	printf("%d, %d\n", first_diag, second_diag);
}


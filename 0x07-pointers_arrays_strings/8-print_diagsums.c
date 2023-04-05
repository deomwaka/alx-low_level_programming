#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the two diagonals
 * @a: The matrix of int
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		y = y + a[(size + 1) * i];
	}
	for (i = 1; i <= size; i++)
	{
		x = x + a[(size - 1) * i];
	}
	printf("%d, %d\n", y, x);
}

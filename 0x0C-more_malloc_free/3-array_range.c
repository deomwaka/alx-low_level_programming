#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of value stored and elements
 *
 * Return: if min > max or malloc fails - NULL
 *         else - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, tot;

	if (min > max)
		return (NULL);

	tot = max - min + 1;

	ptr = malloc(sizeof(int) * tot);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < tot; i++, min++)
	{
		ptr[i] = min;
	}

	return (ptr);

}

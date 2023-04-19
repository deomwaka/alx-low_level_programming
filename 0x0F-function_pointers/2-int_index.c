#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array containing elements
 * @size: size of array
 * @cmp: function which compares values
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}

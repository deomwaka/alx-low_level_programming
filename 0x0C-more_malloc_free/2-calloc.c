#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of arguments
 * @size: size of array arguments
 *
 * Return: if nmemb or size is 0, then _calloc returns NULL
 *         if malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *input;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	input = memo;

	for (i = 0; i < (size * nmemb); i++)
		input[i] = '\0';

	return (memo);
}

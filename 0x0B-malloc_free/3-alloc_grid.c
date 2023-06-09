#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array
 * @width: width input
 * @height: height input
 *
 * Return: if both width and height <= 0 return NULL
 *         else a pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width  <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

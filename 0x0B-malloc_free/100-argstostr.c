#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates arguments into a string.
 * @ac: number of arguments.
 * @av: array of the arguments.
 *
 * Return: if ac == 0 or av == NULL, return NULL.
 *         Else a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[index++] = av[a][b];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}

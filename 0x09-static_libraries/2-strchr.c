#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to be located
 * @c: character to be searched
 * Return: A pointer to the first ocurrence if c, else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

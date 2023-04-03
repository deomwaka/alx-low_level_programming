#include "main.h"
/**
 * _strspn - Gets the length of prefix substring
 * @s: the string to be located
 * @accept: the prefix to be taken
 * Return: the number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++;)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

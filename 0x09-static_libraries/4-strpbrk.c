#include "main.h"
/**
 * _strpbrk - search a string for any set of bytes
 * @s: string to be searched
 * @accept: string with bytes to be searched
 * Return: pointer to byte in s that matches one in accept
 * else NULL if no such byte is detected
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

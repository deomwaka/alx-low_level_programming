#include "main.h"
/**
 * _memset - fills memory with a constant
 * @s: charater memory pointed
 * @b: constant character byte
 * @n: integer that fills the first bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0, i < n, i++)
	{
		s[i] = b;
	}
	return (s);
}

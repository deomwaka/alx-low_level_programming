#include "main.h"
/**
 * _memcpy - string pointed to
 * @dest: buffer to copy string to character
 * @src: string to copy character
 * @n: unsigned integer var
 * Return: A pointer back to the string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strstr - Find a substring
 * @haystack: string to be searched through
 * @needle: substring to be loacted in haystack
 * Return: First appearance of substring needle in haystack
 * else NULL is for substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

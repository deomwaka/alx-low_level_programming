#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: string one to be compared
 * @s2: string two to be compared
 * Return: if both strings are identical and have wildcards, return 1 else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return ((*s1 == '\0'));

	if (*s2 == '*')
		return ((*s1 != '\0' && wildcmp(s1 + 1, s2)) || wildcmp(s1, s2 + 1));

	if (*s1 == '\0' || *s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}

#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: integer value inputed
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

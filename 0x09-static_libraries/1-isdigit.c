#include "main.h"

/**
 * _isdigit - checks the character c for a digit (0 through 9)
 * @c: character integer variable
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


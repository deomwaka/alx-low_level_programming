#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: - integer to be checked
 * Return: if n > 0 return factorial of that integer
 *         if n < 0 return 1 to show error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

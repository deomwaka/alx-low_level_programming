#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power y
 * @x: the integer to be raised
 * @y: the int raised
 * Return: the value of x raised by y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	result *= _pow_recursion(x, y - 1);

	return (result);
}

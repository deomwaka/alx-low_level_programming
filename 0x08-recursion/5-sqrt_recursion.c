#include "main.h"

int src_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * src_sqrt - searches the natural square root of an entered integer.
 * @num: The integer to find the square root of.
 * @root: The root to be tested.
 * Return: If the number has a natural square root, return the square root.
 *         If the number does'nt have a natural square root, return (-1)
 */
int src_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (src_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of an integer
 * @n: the integer to return the square root of.
 * Return: If n has a natural square root, return the natural square root of n.
 *         If n does'nt have a natural square root, return (-1)
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (src_sqrt(n, root));
}

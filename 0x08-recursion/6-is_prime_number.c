#include "main.h"

int is_dividable(int num, int div);
int is_prime_number(int n);

/**
 * is_dividable - Checks if an integer is dividable
 * @num: the integer to be checked
 * @div: the divisor
 * Return: if the integer is dividable, return 0 else 1
 */
int is_dividable(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_dividable(num, div + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: he integer to be checked
 * Return: if the integer is'nt a prime number, return 0 else 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_dividable(n, div));
}

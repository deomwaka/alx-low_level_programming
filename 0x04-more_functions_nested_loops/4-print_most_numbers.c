#include "main.h"
/**
 * print_most_numbers - print numbers from (0 - 9) without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(numbers[i]);
	}
}


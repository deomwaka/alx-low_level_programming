#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i * j < 10)
			{
				if (j > 0)
				{
					putchar(' ');
					putchar(' ');
				}
				putchar(i * j + '0');
			}
			else
			{
				putchar(' ');
				putchar(i * j / 10 + '0');
				putchar(i * j % 10 + '0');
			}
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}

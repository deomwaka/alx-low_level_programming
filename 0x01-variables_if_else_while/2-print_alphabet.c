#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet using putchar function
 *
 * Return: Always 0 (Success0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
		putchar('\n');
	}
	return (0);
}


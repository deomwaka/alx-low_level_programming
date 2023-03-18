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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}


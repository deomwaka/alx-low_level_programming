#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments received
 * @argc: count of arguments
 * @argv: array of arguments inputed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

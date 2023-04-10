#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program that multiplies two numbers
 * @argc: count of arguments inputed
 * @argv: array of arguments
 * Return: 0 (success), else 1 (Error) not enough arguments entered
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}

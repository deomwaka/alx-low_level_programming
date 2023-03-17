#include <stdio.h>
/**
 * main - print the size of characters
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	printf("size of a Char: %ld bytes(s)\n", sizeof(char));
	printf("size of an int: %ld bytes(s)\n", sizeof(int));
	printf("size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}


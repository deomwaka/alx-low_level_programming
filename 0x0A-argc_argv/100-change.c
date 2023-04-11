#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coins to make change
 * @argc: count of arguments to be inputed
 * @argv: array of the arguments
 * Return: if count of arguments is not one, 1(Error) else 0(success)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}

		cents--;
	}
	printf("%d\n", coins);
	return (0);
}

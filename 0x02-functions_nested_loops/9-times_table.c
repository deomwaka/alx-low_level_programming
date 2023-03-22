#include "main.h"
/**
 * times_table - entry point
 * Description: prints 9 times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i;

for (i = 0; i <= 10; i++)
{
printf("%d x 9 = %d\n", i, i * 9);
}
return (0);
}


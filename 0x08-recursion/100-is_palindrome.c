#include "main.h"

/**
* str_len - gets length of a string
* @s: string to be examined
* Return: length of a string
*/
int str_len(char *s)
{

	if (!*s)
		return (0);
	else
		return (1 + str_len(s + 1));
}

/**
* palindrome_finder - function to determine palindrome
* @s: string to be checked
* @len: length of the string
* @i: iteration var to determine distance from s
* Return: if string is a palindrome, return 1 else 0
*/
int palindrome_finder(char *s, int len, int i)
{
	if (str_len(s) == 0)
		return (0);

	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i > (len - 1))
		return (1);
	else
		return (palindrome_finder(s, len - 1, i + 1));
}

/**
* is_palindrome - finds if a string is a palindrome
* @s: string to be checked
* Return: if string is a palindrome, return 1 else 0
*/
int is_palindrome(char *s)
{
return (palindrome_finder(s, str_len(s), 0));
}

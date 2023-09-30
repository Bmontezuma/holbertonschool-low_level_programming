#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
		putchar(s[len]);

	putchar('\n');
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to calculate the length of
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len++])
		;

	return (len - 1);
}

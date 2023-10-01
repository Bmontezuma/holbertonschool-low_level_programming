#include "main.h"
#include <stdio.h>
/**
 * print_line - Writes a line n times
 *
 * @n: the number of lines we should print
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}

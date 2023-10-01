#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line on the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * If n is 0 or less, the function should only print '\n'.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}

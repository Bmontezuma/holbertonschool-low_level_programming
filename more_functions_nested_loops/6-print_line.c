#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character '_' should be printed.
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

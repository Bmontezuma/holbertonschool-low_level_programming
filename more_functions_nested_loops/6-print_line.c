#include "main.h"
#include <stdio.h>
/**
 * print_line - Writes a line n times
 * @n: the number of lines we should print
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar ('\n');
	}
}


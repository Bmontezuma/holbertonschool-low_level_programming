#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of underscores n times followed by a newline.
 *
 * @n: The number of times the line of underscores should be printed.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		putchar('_');  /* Print an underscore character */
		i++;
	}
	putchar('\n'); /* Print a newline character */
}


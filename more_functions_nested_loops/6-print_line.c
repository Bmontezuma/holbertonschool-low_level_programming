#include "main.h"
#include <stdio.h>
/**
 * print_line - Writes the line n amount of times
 * @n: the number of lines we should print
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

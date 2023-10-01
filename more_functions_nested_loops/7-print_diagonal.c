#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - This will print out a diagonal line on the terminal
 * @n: the number of times \ should be printed on the lines
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
					putchar(' ');
				if (j == i)
				{
					putchar(92);
					putchar('\n');
				}
			}
		}
	}
	else
		putchar('\n');
}

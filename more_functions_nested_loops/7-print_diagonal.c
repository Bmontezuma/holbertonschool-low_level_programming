#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line of backslashes
 * @n: The number of backslashes in the diagonal
 *
 * Description: This function draws a diagonal line with 'n' backslashes.
 * If 'n' is 0 or less, it only prints a newline character.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				putchar('\t');

			putchar('\\');

			if (len == (n - 1))
				continue;
			putchar('\n');
		}
	}

	putchar('\n');
}


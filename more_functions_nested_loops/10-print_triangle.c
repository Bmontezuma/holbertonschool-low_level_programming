#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 *
 * If size is 0 or less, the function prints only a new line.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size - row; col++)
			{
				putchar(' ');
			}
			for (col = 0; col <= row; col++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}


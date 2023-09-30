#include "main.h"
#include <stdio.h>
/**
 *puts_half - function that will print half of string, followed by new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}

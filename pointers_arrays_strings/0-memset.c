#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: This program tests the _memset function by filling
 * a portion of a character array with a constant byte.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char buffer[20] = "Hello, World!";
	char fill_char = 'X';
	unsigned int n = 5;

	memset(buffer, fill_char, n);

	for (int i = 0; i < 20; i++)
	{
		putchar(buffer[i]);
	}
	putchar('\n');

	return (0);
}


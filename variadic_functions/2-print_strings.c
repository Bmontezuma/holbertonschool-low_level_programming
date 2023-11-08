#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			putchar('('), putchar('n'), putchar('i'), putchar('l'), putchar(')');
		else
			while (*str)
				putchar(*str++);

		if (i != n - 1 && separator != NULL)
			while (*separator)
				putchar(*separator++);
	}

	putchar('\n');

	va_end(args);
}
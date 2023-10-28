#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * Print a series of integers with a separator (if not NULL) and a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
printf("%s", separator);
printf("%d", va_arg(args, int));
}

printf("\n");
va_end(args);
}


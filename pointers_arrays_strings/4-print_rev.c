#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
char *end = s;

while (*end)
end++;

end--;

while (end >= s)
{
putchar(*end);
end--;
}

putchar('\n');
}


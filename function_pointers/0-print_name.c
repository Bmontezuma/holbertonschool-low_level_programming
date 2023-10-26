#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: This is the name to print
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}


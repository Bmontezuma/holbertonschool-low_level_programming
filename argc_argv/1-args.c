#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: The number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
